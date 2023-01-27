#pragma once
#include <iostream>
#include <map>
#include <string>


class Objets 
{
    int position;
    char character;

    public: 

    virtual char getChar() const
    {
        return character;
    }

    int getPos() const
    {
        return position;
    }

    /*virtual void interaction (Player player)
    {

    }*/

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


