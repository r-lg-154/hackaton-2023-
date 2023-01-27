#include <map>
#include <string>
#include <array>
#include "Game.h"

std::map<char,int> event    {{'u', 1}, {'d', 1}, {'l', 1}, {'r', 1}, 
                            {'g', 2},                                
                            {'e', 3}, {'w', 3}};                     

void action(Game & jeu, char & input)
{
    switch(event[input])
    {
        case 1: //1 movements        

        case 2: //2 interaction w/ environnement

        case 3: //3 self action
    }
    
    //display updated map.
}