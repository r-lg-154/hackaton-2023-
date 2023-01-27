#include"/home/patate/hackaton-2023-/includes/Room.h"
#include"/home/patate/hackaton-2023-/includes/objets.h"


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

void Room::set_Room(const std::vector<Objets*> Obj){
    instances = Obj;
}

char Room::get_char(const int k) const{
    return instances[k]->getChar();
}


Room::Room(int L, int l, int x, int y){
    _L = L;
    _l = l;
    _x = x;
    _y = y;
}

void Room::create_room(){

    for(int x = 0; x < _L; x++){
        for(int y =0; y< _l; y++){
            if(x == 0 || x == _L-1){
                Wall_v *wall_v = new Wall_v();
                instances.push_back(dynamic_cast<Objets*>(wall_v));
            }
            else if(y == 0 || y == _l-1){
                Wall_h *wall_h = new Wall_h();
                instances.push_back(dynamic_cast<Objets*>(wall_h));
            }
            else{
                Voide *voide = new Voide();
                instances.push_back(dynamic_cast<Objets*>(voide));
            }
        }
    }

}

