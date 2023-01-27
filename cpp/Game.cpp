#include"Game.h"

std::vector<Room> Game::get_Rooms() const{ return _Rooms;};
void Game::set_Rooms(const std::vector<Room> Rooms){ _Rooms = Rooms;}
int Game::get_Rooms_Size() const{ return _Rooms.size();};