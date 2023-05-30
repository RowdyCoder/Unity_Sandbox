using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sword : MonoBehaviour
{
    [SerializeField] Animator myAnimator;
    private PlayerControls playerControls;

    private void Awake()
    {
        playerControls = new PlayerControls();
    }

    private void OnEnable()
    {
        playerControls.Enable();
    }

    // Start is called before the first frame update
    void Start()
    {
        //subscribe to attack function
        playerControls.Combat.Attack.started += _ => Attack();
    }

    private void Attack()
    {
        //fire sword animation
        myAnimator.SetTrigger("Attack");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
