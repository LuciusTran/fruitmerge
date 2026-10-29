using System.Collections;
using UnityEngine;

// Integration helpers used by the native-derived bodies in FruitItem.cs.
public partial class FruitItem
{
    public bool RecoveredMerged => IsMerged;
    public int RecoveredScore => m_MergeScore;

    public void ApplyRecoveredSkin(string skin)
    {
        UpdateSkin(skin);
        SwitchNormalStates();
        ResetRedAnimation();
    }

    public void RetireRecovered()
    {
        if (!this) return;
        IsMerged = true;
        if (_rigidbody2D) _rigidbody2D.simulated = false;
        gameObject.SetActive(false);
        Destroy(gameObject);
    }

    private IEnumerator RecoveredPop()
    {
        Vector3 size = transform.localScale;
        float elapsed = 0f;
        while (elapsed < .15f)
        {
            elapsed += Time.deltaTime;
            transform.localScale = size * Mathf.Lerp(.8f, 1f, Mathf.Clamp01(elapsed / .15f));
            yield return null;
        }
        transform.localScale = size;
    }
}
