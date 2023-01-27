#include "player.h"

class Monsters : public Objets
{
    friend class IceMonster;
    friend class HobGoblin;
    friend class Warrior;

    char pouvoir; //à quel type de monstre a-t-on affaire ?
    char attaque; //ce que le joueur peut utiliser contre lui

    public :
    Monsters (char p, char a) : pouvoir(p), attaque(a)
    {

    }

    ~Monsters() 
    {

    }

    void reaction (char p)
    {
        if (p == (*this).pouvoir)
        {
            delete(this);
        }
        else 
        {
            std::cout<<"GAME OVER"<<std::endl;
        }
    }
};


//on va créer des classes filles pour définir les différents monstres

class IceMonster : public Monsters
{
    public : 
    void creer() 
    {
        (*this).pouvoir = 'i';
        (*this).attaque = 'I';
    }

    void interaction (Player player)
    {
        char key;
        std::cin >> key;
        if (key == (*this).attaque)
        {
            delete((this));
            std::cout<<"Ice Monster killed !!!!"<<std::endl;
        }
        else 
        {
            modifyLifeLevel(player, getLifeLevel(player) - 30);
        }
    }
};

void avance_g (char dir, Monsters m)
{

}
class HobGoblin : public Monsters
{
    char direction; //ce monstre se déplace vers nous

    public :

    void creer ()
    {
        (*this).pouvoir = 'h';
        (*this).attaque = 'H';
    }

    void avance ()
    {
        avance_g(direction, (*this));
    }   

    void interaction(Player player)
    {
        char key;
        std::cin >> key;
        if (key == (*this).attaque)
        {
            delete((this));
            std::cout<<"Hob Goblin killed !!!!"<<std::endl;
        }
        else 
        {
            modifyLifeLevel(player, getLifeLevel(player) - 40);
        }
    }
};


class Weapon : public Objets
{
    public :

    void place_(int pos)
    {

    }
};
class Warrior : public Monsters 
{
    //ce perso laisse des armes derriere lui
    bool b ; //est-ce qu'il laisse une arme en sa position
    char direction;

    public : 

    void creer ()
    {
        (*this).pouvoir = 'w';
        (*this).attaque = 'W';
    }

    void avance ()
    {
        
        if (b == true)
        {
            Weapon weapon;
            weapon.place_((*this).getPos()) ;
        }

        avance_g(direction, (*this));
    }

    void interaction(Player player)
    {
        char key;
        std::cin >> key;
        if (key == (*this).attaque)
        {
            delete((this));
            std::cout<<"Warrior killed !!!!"<<std::endl;
        }
        else 
        {
            modifyLifeLevel(player, getLifeLevel(player) - 20);
        }
    }

};