#include"Room.h"
#include"Objets.h"

int Room::x() const{
    return _x;
}

int Room::y() const{
    return _y;
}

int Room::l() const{
    return _l;
}

int Room::L() const{
    return _L;
}


void Room::x(const int x){
    _x = x;
}

void Room::y(const int y){
    _y = y;
}

void Room::l(const int l){
    _l = l;
}

void Room::L(const int L){
    _L = L;
}

void Room::set_Room(const std::vector<Objets> Obj){
    instaces = Obj;
}

char Room::get_char(const int k) const{
    return instaces[k].getChar();
}

Room::Room(){
    Wall_h wall_h;
    Wall_v wall_v;
    Void voide;
    for(int x = 0; x < _L; x++){
        for(int y =0; y< _l; y++){
            if(x == 0 || x == _L){
                instaces.push_back(wall_h);
            }
            else if(y == 0 || y == _l){
                instaces.push_back(wall_v);
            }
            else{
                instaces.push_back(voide)
            }
        }
    }
}