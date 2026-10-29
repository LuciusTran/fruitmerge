using UnityEngine;

/// <summary>Direct references to assets exported from the supplied APKs.</summary>
public class RecoveredCatalog : ScriptableObject
{
    public GameObject gamePrefab;
    public GameObject[] roomPrefabs;
    public TextAsset roomConfiguration;
    public TextAsset skinConfiguration;
    public AudioClip[] sounds;
    public Font font;
}
