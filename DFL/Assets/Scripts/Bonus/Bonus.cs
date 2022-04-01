using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bonus : MonoBehaviour
{
    [HideInInspector] public BonusManager bonusManager;


    /// <summary>
    /// Called when the player collides with the bonus
    /// </summary>
    /// <param name="other">The collider in contact</param>
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            TriggerBonus();
        }
    }


    protected virtual void TriggerBonus() { }

}
