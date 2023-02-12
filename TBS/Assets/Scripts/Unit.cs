using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using UnityEngine;

public class Unit : MonoBehaviour
{
    [SerializeField] private Animator _unitAnimator;
    [SerializeField] float rotateSpeed = 10f;
    private Vector3 _targetPosition;

    private void Awake()
    {
        _targetPosition = transform.position;
    }

    private void Update()
    {
        float stoppingDistance = 0.1f;

        if (Vector3.Distance(transform.position, _targetPosition) > stoppingDistance)
        {
            Vector3 moveDirection = (_targetPosition - transform.position).normalized;
            float moveSpeed = 4f;
            transform.position += moveDirection * moveSpeed * Time.deltaTime;
                        
            //make character face direction it's walking
            transform.forward = Vector3.Lerp(transform.forward, moveDirection, Time.deltaTime * rotateSpeed);

            _unitAnimator.SetBool("isWalking", true);
        }
        else
        {
            _unitAnimator.SetBool("isWalking", false);
        }

        //---Commented out now that we have the UnitActionSystem class
        //if (Input.GetMouseButtonDown(0))
        //{
        //    Move(MouseWorld.GetPosition());
        //}
    }

    public void Move(Vector3 targetPosition)
    {
        _targetPosition = targetPosition;
    }
}
