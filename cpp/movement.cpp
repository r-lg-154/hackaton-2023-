#include "includes/Game.h"

std::map<char,std::array<int,2>> correspondence {{'u', {-1, 0}}, {'d', {1, 0}}, {'l', {0, -1}}, {'r', {0, 1}}};

bool notOnAnEdge(int const &indice, int const &hauteur, int const &largeur)
{
    return !((indice < hauteur) or (indice % hauteur == 0) or (indice % hauteur == hauteur - 1) or (indice >= largeur*(hauteur - 1)));
}

int nextPos(int const &currentTile, int const &hauteur, int const &largeur, char const &move)
{
    std::array<int,2> increment = correspondence[move];
    if (notOnAnEdge(currentTile, hauteur, largeur))
    {
        return currentTile + increment[0] + largeur*increment[1];
    }
}

void makeMove(Game & jeu, char move)
{
    Room* currentRoom = jeu.get_Rooms()[0];
    int currentTile = currentRoom->get_pos('@');
    int nextTile = nextPos(currentTile, currentRoom->l(), currentRoom->L(), move);
    char there = currentRoom->get_char(nextTile);

    if (there == '.')
    {
        std::vector<Objets*> instancesList = currentRoom->get_Objets();
        Objets* joueur = instancesList[currentTile];
        instancesList[currentTile] = instancesList[nextTile];
        instancesList[nextTile] = instancesList[currentTile];
    }
}