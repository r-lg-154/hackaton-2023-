#pragma once
#include"Room.h"
#include<vector>

class Game
{
private:
   std::vector<Room*> _Rooms;

public:

    std::vector<Room*> get_Rooms() const;
    void set_Rooms(const std::vector<Room*> Rooms);
    
    int get_Rooms_Size() const;

    void init_level(int number);

    int which_room();


};

