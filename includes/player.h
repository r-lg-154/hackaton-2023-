#pragma once

#include <iostream>

#include "objets.h"


class Weapon : public Objets
{
    private:
        short int damagePerHit;
    public:
        friend short int getDamagePerHit(Weapon weapon);
};


class Player : public Objets
{
    // Les attributs position et character sont déjà dans la classe objet
    private:
        // Niveau de vie : entier de 0 à 10, commence à 10, meurt à 0
        short int lifeLevel = 10;
        Weapon weapon;
        // Nombre de golds : commence à 0
        int gold = 0;
    public:
        friend short int getLifeLevel(Player player);
        friend int getGold(Player player);
        friend Weapon getWeapon(Player player);
};

