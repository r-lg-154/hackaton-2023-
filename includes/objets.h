#include <iostream>
#include <map>
#include <string>

class Objets 
{
    int position;
    char character;

    public: 

    char getChar() const
    {
        return (*this).character;
    }

    int getPos() const
    {
        return (*this).position;
    }

    virtual void interaction (Player player)
    {

    }

};

class Player : public Objets
{
    int points;

    public :

    int getPoints()
    {
        return (*this).points;
    }

    void changePoints(int x)
    {
        (*this).points = (*this).points -x;
    }

};


