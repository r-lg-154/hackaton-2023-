#pragma once

#include <iostream>

class Player 
{
    private:
        int position;
        short int lifeLevel;
        Weapon weapon;
        int gold;
    public:
        friend int getPosition(Player player );
        friend short int getLifeLevel(Player player);
        friend int getGold(Player player);
};

class Weapon
{
    private:
        char weaponName;
        int damagePerHit;
    public:
        friend Weapon getWeapon(Player player);
};

