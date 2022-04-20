using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Defender : Enemy
{
    public override void ChasePlayer()
    {
        base.ChasePlayer();
    }

    private void Start()
    {
        animator.Play("Base Layer.Idle", 0, Random.Range(0f, 1f));
    }

    private void Update()
    {
        if (navMeshAgent.velocity.magnitude > 0.0001f)
        {
            animator.SetFloat("Speed", 1f);
        }
        else
        {
            animator.SetFloat("Speed", 0f);
            Quaternion lookRot = Quaternion.LookRotation(playerPosition - transform.position);
            navMeshAgent.transform.rotation = Quaternion.Slerp(navMeshAgent.transform.rotation, lookRot, 5 * Time.deltaTime);
        }
    }
}
