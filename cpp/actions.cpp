#include <map>
#include <string>
#include <array>

std::map<char,int> event    {{'u', 1}, {'d', 1}, {'l', 1}, {'r', 1}, 
                            {'g', 2},                                
                            {'e', 3}, {'w', 3}};                     

std::map<char,std::array<int,2>> correspondence {{'u', {0, 1}}, {'d', {0, -1}}, {'l', {-1, 0}}, {'r', {1, 0}}};

void action(char input)
{
    switch(event[input])
    {
        case 1: //1 movements
        
        const std::array<int,2> direction = correspondence[input];
        /*
        room = Jeu.whichRoom()
        if (PathIsClear(direction)
        {
            room.move(direction)
        }
        */

        case 2: //2 interaction w/ environnement

        case 3: //3 self action
    }
    
    //display updated map.
}