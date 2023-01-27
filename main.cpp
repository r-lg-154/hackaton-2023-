#include <iostream>
#include"includes/Room.h"
#include "includes/objets.h"
#include "includes/display.h"
#include "includes/Game.h"

int main(int, char**) 
{

    Room Room_test(5,5, 0, 0);
    Room_test.create_room();

    Game jeu;

    
    std::vector<Room> temp = {Room_test};
    jeu.set_Rooms(temp);

    display(jeu);

}
