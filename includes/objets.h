#pragma once
#include <iostream>
#include <map>
#include <string>


class Objets 
{
    int position;
    char character;

    public:
    void setChar(const char lettre);
    char getChar() const {return character;};

};

class Player : public Objets
{
    int points;

    public :

    int getPoints()
    {
        return points;
    }

    void changePoints(int x)
    {
        points = points -x;
    }

};


class Wall_h : public Objets
{
    private :
    int longueur;
    
    public :
    Wall_h(){setChar('-');};



};

class Wall_v : public Objets
{  
    private :
    int longueur; 

    public :
    Wall_v(){setChar('|');};


};

class Voide : public Objets
{
    private :


    public :
    Voide (){setChar('.');};

};
