#include"Game.h"
#include<iostream>
#include<vector>

void screen_clear()
{
    // Clear terminal
    std::cout << "\x1b[H\x1b[J";
    // Hide cursor
    std::cout << "\e[?25l";
}


void display(const Game game_area){

    screen_clear();
    
    for(int k = 0; k < game_area.get_Rooms_Size(); k++){
        auto Room = game_area.get_Rooms()[k];
        for(int j = 0; j < Room.L()*Room.l(); j++){
            std::cout << "\x1b["<<Room.x()+ (j%Room.L()) << ";"<< Room.y() + (j/Room.L()) <<";H";
            std::cout << Room.get_char(j);
        }
    }

}
