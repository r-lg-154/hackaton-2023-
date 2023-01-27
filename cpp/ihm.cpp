#include "sys/ioctl.h"
#include "termios.h"
#include "stdio.h"
#include "time.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <termios.h>


static const int STDIN=0;
static bool initialized = false;

std::map<char,char> actions {{'i', 'u'}, {'k', 'd'}, {'j', 'l'}, {'l', 'r'},
                             {'a', 'g'}, {'e', 'e'}, {'z', 'w'}, {'x', 'x'}};

int keyEvent()
// Aucune idée de comment ça marche mais c'est fonctionnel
{    
    if(!initialized) // Initialise 
    {
        termios term;
        tcgetattr(STDIN, &term);
        term.c_lflag &= ~ICANON;
        tcsetattr(STDIN, TCSANOW, &term);
        setbuf(stdin, NULL);
        initialized = true;
    }
    int bytesWaiting;                                                                                                                                                   
    ioctl(STDIN, FIONREAD, &bytesWaiting);
    return bytesWaiting;
}

bool exists(std::map<char,char> dict, char key) 
// vérifie si une clé appartient au dictionnaire ou non
    {
    if (dict.find(key) == dict.end())
    {
        return false;
    }
    return true;
    }

char getInput(std::vector<char> buffer)
{   
    if ((buffer.size() > 0) and (exists(actions,buffer[0])))
    {
        return actions[buffer[0]];
    }

    else
    {
        return 'n';
    }

}

void delay(const int& ms){
    clock_t end;
    end = clock() + ms * CLOCKS_PER_SEC/1000;
    while( clock() < end){
        // wait
    }
}


std::map<char,std::string> tests{{'l', "left"}, {'r', "right"}, {'u', "up"}, {'d', "down"},
                                    {'e', "eat"}, {'g', "get"}, {'w', "wield weapon"}, {'x', "Bye !"}};

bool existsBis(std::map<char,std::string> dict, char key) 
// vérifie si une clé appartient au dictionnaire ou non
    {
    if (dict.find(key) == dict.end())
    {
        return false;
    }
    return true;
    }

void action(char input)
{
    if(existsBis(tests, input))
    {
        std::cout << tests[input] << "\n";
    }
}
