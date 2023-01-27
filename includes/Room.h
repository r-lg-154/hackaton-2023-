#pragma once
#include<vector>
#include"objets.h"


class Room
{
private:
    int _x;
    int _y;
    int _l;
    int _L;

    std::vector<Objets *> instances;

public:

    Room(int L, int l, int x, int y);

    int x() const;
    int y() const;
    int l() const;
    int L() const;
    void x(const int x);
    void y(const int y);
    void l(const int l);
    void L(const int L);

    void create_room();

    std::vector<Objets*> get_Objets() const {return instances;};
    void set_Room(const std::vector<Objets*> Room);
    char get_char(const int k) const;
    int get_pos(const char) const;

};
