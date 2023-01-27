#pragma once
#include "objets.h"

class Wall_h : public Objets
{

    int longueur;
    char character = '-';
    public :
    virtual char getChar() const;


};

class Wall_v : public Objets
{   
    int longueur; 
    char character = '|';

    public :
    virtual char getChar() const;


};

class Void : public Objets
{
    char character = '.';
    public :
    virtual char getChar() const;

};
