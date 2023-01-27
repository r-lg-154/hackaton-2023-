#include "player.h"

class Wall_h : public Objets
{

    int longueur;
    char character = '-';

};

class Wall_v : public Objets
{
    int longueur; 
    char character = '|';

};

class Void : public Objets
{
    char character = '.';
};
