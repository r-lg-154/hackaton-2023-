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

    virtual void interaction (Objets objet, Player player)
    {

    }

};


class Weapon: public Objets
{
    public:
        short int damagePerHit;
        friend short int getDamagePerHit(Weapon weapon);
        // Récupération de l'attribut privé
        short int getDamagePerHit(Weapon weapon)
        {
            return weapon.damagePerHit;
        }

};

class Player: public Objets
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

        // Modification des attributs privés
        friend void modifyLifeLevel(Player player, int newLifeLevel);
        friend void modifyGold(Player player);
        friend void modifyWeapon(Player player);

        friend void modifyLifeLevel(Player player, int newLifeLevel)
        {
            player.lifeLevel = newLifeLevel;
        }
        void modifyGold(Player player, int newGold)
        {
            player.gold = newGold;
        }
        void modifyWeapon(Player player, int newWeapon)
        {
            player.lifeLevel = newWeapon;
        }
};


// Interaction
void interaction(Weapon weapon, Player player)
{
    modifyLifeLevel(player, getLifeLevel(player) - getDamagePerHit(weapon));
}   