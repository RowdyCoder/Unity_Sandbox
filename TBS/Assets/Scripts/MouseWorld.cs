using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MouseWorld : MonoBehaviour
{
    private static MouseWorld _instance;

    [SerializeField] 
    private LayerMask _mousePlaneLayerMask;

    private void Awake()
    {
        _instance = this;
    }

    private void Update()
    {
        transform.position = MouseWorld.GetPosition();

    }

    public static Vector3 GetPosition()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        Physics.Raycast(ray, out RaycastHit rayCastHit, float.MaxValue, _instance._mousePlaneLayerMask);
        return rayCastHit.point;
    }


}
