#include <iostream>
#include <vector>
#include <string>

#include "player.h"


// Gestion des contacts
void contact(Player player, Objets objet)
{
    int positionPlayer = player.getPos();
    int positionObjet = objet.getPos();

    // Lancement du comportement
    getWeapon(player).interactionWeapon(getWeapon(player), player);
}