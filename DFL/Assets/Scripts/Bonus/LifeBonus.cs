using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LifeBonus : Bonus
{
    protected override void TriggerBonus()
    {
        playerG.lifeNumber++;
    }
}
