using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitSelectedVisual : MonoBehaviour
{
    [SerializeField]
    private Unit unit;
    private MeshRenderer _meshRenderer;

    private void Awake()
    {
        _meshRenderer= GetComponent<MeshRenderer>();
        UnitActionSystem.Instance.OnSelectedUnitChanged += UnitActionSystem_OnSelectedUnitChange;
    }

    private void UnitActionSystem_OnSelectedUnitChange(object sender, EventArgs empty)
    {

    }
}
