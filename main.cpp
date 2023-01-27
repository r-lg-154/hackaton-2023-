#include <iostream>
#include <vector>
#include "ihm.h"

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

        // Event management
        //std::cout << "input envoyé :" << input << "\n";

        action(input);

        if (input == 'x')
        {
            gameIsRunning = false;
        }
    }

    return EXIT_SUCCESS;
}
