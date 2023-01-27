#include "/home/patate/hackaton-2023-/includes/Game.h"
#include <stdlib.h>
#include "/home/patate/hackaton-2023-/includes/Room.h"

std::vector<Room*> Game::get_Rooms() const{ return _Rooms;};
void Game::set_Rooms(const std::vector<Room*> Rooms){ _Rooms = Rooms;}
int Game::get_Rooms_Size() const{ return _Rooms.size();};


void Game::init_level(int number){
    /*for(int k =0; k < number; k++){
        int l = rand() % 40 +1;
        int L = rand() % 40 +1;

        int x = rand() % 20 +2;
        int y = rand() % 20 +2;


        Room* room = new Room(L,l, x, y);
    
    }*/
    Room* Room1 = new Room(20, 54, 2, 50);
    Room* Room2 = new Room(12, 13, 25, 1);
    Room* Room3 = new Room(12, 23, 12, 25);

    Room1->create_room();
    Room2->create_room();
    Room3->create_room();

    std::vector<Room*> Rooms = {Room1, Room2, Room3};
    _Rooms = Rooms;
};

/*int Game::which_room(){
    int rslt = 0;
    int k = 0;
    int j = 0;

    while(cond){
        

        while(_Rooms[k]->get_char(j) != '@'){
            j++;
        }

        

    }
};*/