#include <vector>
#include <map>
#include <string>
#include "Game.h"

int keyEvent();
bool exists(std::map<char,char>, char);
char getInput(std::vector<char> const &);
void delay(const int&);
bool existsBis(std::map<char,std::string> dict, char key);
void action(Game&,const char&);