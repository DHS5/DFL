using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LifeBonus : Bonus
{
    protected override void Start()
    {
        base.Start();
        bar = false;
    }

    protected override void TriggerBonus()
    {
        bonusManager.AddLife(playerG.lifeNumber - 1);
        playerG.lifeNumber++;

        base.TriggerBonus();
    }
}
