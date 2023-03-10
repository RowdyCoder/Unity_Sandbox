
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerOneMove : MonoBehaviour
{
    [SerializeField]
    private Animator _animator;

    public float walkSpeed = 0.001f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        /**Walking left and right*/
        if(Input.GetAxis("Horizontal") > 0)
        {
            _animator.SetBool("Forward", true);
            transform.Translate(walkSpeed, 0, 0);
        }

        if (Input.GetAxis("Horizontal") < 0)
        {
            _animator.SetBool("Backward", true);
            transform.Translate(-walkSpeed, 0, 0);
        }

        if (Input.GetAxis("Horizontal") == 0)
        {
            _animator.SetBool("Forward", false);
            _animator.SetBool("Backward", false);
        }

        /**Jumping and crouching*/
        if (Input.GetAxis("Vertical") > 0)
        {
            _animator.SetTrigger("Jump");
        }

        if (Input.GetAxis("Vertical") < 0)
        {
            _animator.SetBool("Crouch", true);
        }

        if (Input.GetAxis("Vertical") == 0)
        {
            _animator.SetBool("Crouch", false);
        }
    }
}

