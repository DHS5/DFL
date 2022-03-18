using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClassicAttacker : Attackers
{
    public override void TargetEnemy(GameObject enemy)
    {
        base.TargetEnemy(enemy);
    }

    protected override void BlockEnemy()
    {
        base.BlockEnemy();
        Vector3 playerPos = player.transform.position;
        Vector3 targetPos = target.transform.position;
        float dist = Vector3.Distance(playerPos, targetPos);
        Vector3 dir = targetPos - playerPos;
        navMeshAgent.SetDestination(playerPos + dir.normalized * (dist/2));
    }

    private void LateUpdate()
    {
        // Gets the player's position
        Vector3 playerPos = player.transform.position;

        if (!hasDefender)
        {
            // Gets the player's direction
            Vector3 playerDirection = player.transform.forward.normalized;

            Vector3 destination = transform.position + playerDirection.normalized * playerProtectionRadius;
            destination.x = Mathf.Clamp(destination.x, playerPos.x - 10, playerPos.x + 10);
            destination.z = Mathf.Clamp(destination.z, playerPos.z, playerPos.z + 10);

            navMeshAgent.SetDestination(destination);
            //transform.Translate(player.GetComponent<PlayerController>().velocity);
        }
        else
        {
            BlockEnemy();

            if (Vector3.Distance(transform.position, playerPos) > 12 || target.transform.position.z - playerPos.z < -5)
            {
                UnTarget();
            }
        }
    }
}
