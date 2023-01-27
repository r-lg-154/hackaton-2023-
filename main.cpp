#include <iostream>
#include <vector>
#include "ihm.h"
#include"includes/Room.h"
#include "includes/objets.h"
#include "includes/display.h"
#include "includes/Game.h"


int main()
{

    bool gameIsRunning{true};
    char termInput;
    char input;
    std::vector<char> buffer;

    while(gameIsRunning)
    {

        //Input gathering

        delay(500);
        while(keyEvent())
        {
            std::cin >> termInput; 
            //std::cout << "\n";
            buffer.push_back(termInput);
        }

        input = getInput(buffer);
        buffer.clear();

        if (input == 'x')
        {
            gameIsRunning = false;
            input = 'n';
        }
        
        // Event management
        
        if (input != 'n')
        {
            action(input);
        }
        
    }

    return EXIT_SUCCESS;
}