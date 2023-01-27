#pragma once

#include <iostream>

// Incomplete class declaration :
// https://www.ibm.com/docs/en/zos/2.3.0?topic=only-incomplete-class-declarations-c
class Player;

class Objets
{
public:
    int position;
    char character;

    char getChar() const
    {
        return (*this).character;
    }

    int getPos() const
    {
        return (*this).position;
    }
};

class Weapon : public Objets
{
public:
    short int damagePerHit;
    friend short int getDamagePerHit(Weapon weapon);
    // Récupération de l'attribut privé
    friend short int getDamagePerHit(Weapon weapon)
    {
        return weapon.damagePerHit;
    }

    // Interaction
    virtual void interactionWeapon(Weapon weapon, Player player);
};

class Player : public Objets
{
    // Les attributs position et character sont déjà dans la classe objet
public:
    // Niveau de vie : entier de 0 à 10, commence à 10, meurt à 0
    short int lifeLevel = 10;
    Weapon weapon;
    // Nombre de golds : commence à 0
    int gold = 0;
    // Récupération des attributs privés
    friend short int getLifeLevel(Player player);
    friend int getGold(Player player);
    friend Weapon getWeapon(Player player);
    friend short int getLifeLevel(Player player)
    {
        return player.lifeLevel;
    }
    friend int getGold(Player player)
    {
        return player.gold;
    }
    friend Weapon getWeapon(Player player)
    {
        return player.weapon;
    }

    // Modification des attributs privés
    friend void modifyLifeLevel(Player player, int newLifeLevel);
    friend void modifyGold(Player player, int newGold);
    friend void modifyWeapon(Player player, int newWeapon);

    friend void modifyLifeLevel(Player player, int newLifeLevel)
    {
        player.lifeLevel = newLifeLevel;
        return;
    }

    friend void modifyGold(Player player, int newGold)
    {
        player.gold = newGold;
        return;
    }

    friend void modifyWeapon(Player player, int newWeapon)
    {
        player.lifeLevel = newWeapon;
        return;
    }
};

void Weapon::interactionWeapon(Weapon weapon, Player player)
{
    modifyLifeLevel(player, getLifeLevel(player) - getDamagePerHit(weapon));
    return;
}
