using UnityEngine;

// Host integration. Source-derived gameplay bodies remain in MergeFruit.cs.
public partial class MergeFruit
{
    public bool RecoveredPaused;
    public int RecoveredDrops;
    private float _saveAt;
    public int RecoveredNextIndex => _nextRandomIndex;
    public GameObject RecoveredCurrent => _currentFruit;
    public FruitItem[] RecoveredFruits => m_GamePanel.GetComponentsInChildren<FruitItem>();

    public void QueueSave() { _saveAt = Time.time + .7f; }
    public void SaveRecoveredNow() { SaveFruits(); }
    public void EnsureRecoveredPreview() { if (!_currentFruit) StartCreateRandomFruitCoroutine(); }

    public void RestoreRecoveredBoard()
    {
        StopAllCoroutines(); DestroyChildren(m_GamePanel); _currentFruit = null;
        ResetStatus(); LoadFruits(); ResetLastFruitPosByLine();
        RandomNextFruit(); CreateRandomFruitItem();
    }

    public void RecoveredDropAt(float worldX)
    {
        if (RecoveredPaused || _startedFinishGame || !_currentFruit) return;
        _isDragging = true;
        UpdatePos(Camera.main.WorldToScreenPoint(new Vector3(worldX, 0, 0)));
        ReleaseCurrentFruit();
    }

    public void RecoveredSelectToolTarget(FruitItem fruit)
    {
        if (!fruit || fruit.RecoveredMerged || fruit._rigidbody2D.bodyType != RigidbodyType2D.Dynamic) return;
        if (_gameState == GameState.Bomb)
        {
            fruit.RetireRecovered(); _bombAction?.Invoke(); _bombAction = null;
        }
        else if (_gameState == GameState.Upgrade && fruit.FruitType != FruitType.Fruit11)
        {
            // The recovered upgrade coroutine replaces one selected fruit with its successor.
            var next = CreateFruitItem((int)fruit.FruitType + 1, fruit.transform.position);
            next.GetComponent<FruitItem>().ReleaseDown(); fruit.RetireRecovered();
            _upgradeAction?.Invoke(); _upgradeAction = null;
        }
        else return;
        _gameState = GameState.Game; QueueSave();
    }

    private void RecoveredToolInput()
    {
        if (!Input.GetMouseButtonDown(0) || RecoveredGameFlow.Instance.PointerOverUI()) return;
        Vector2 world = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        foreach (var collider in Physics2D.OverlapPointAll(world))
        {
            var fruit = collider.GetComponentInParent<FruitItem>();
            if (fruit) { RecoveredSelectToolTarget(fruit); break; }
        }
    }
}
