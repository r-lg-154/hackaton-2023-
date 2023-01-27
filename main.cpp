#include <iostream>
#include"Room.h"
#include "objets.h"
#include "display.h"
#include "Game.h"

int main(int, char**) {

    Room Room_test(5,5, 0, 0);
    Room_test.create_room();

    Game jeu;

    
    std::vector<Room> temp = {Room_test};
    jeu.set_Rooms(temp);

    display(jeu);
    




}
