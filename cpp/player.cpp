#include <iostream>
#include <vector>
#include <string>

#include "player.h"


// Définition des méthodes de récupération des attributs en private
short int getLifeLevel(Player player)
{
    return player.lifeLevel;
}

int getGold(Player player)
{
    return player.gold;
}

Weapon getWeapon(Player player)
{
    return player.weapon;
}

short int getDamagePerHit(Weapon weapon)
{
    return weapon.damagePerHit;
}


