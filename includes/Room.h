#pragma once
#include<vector>
#include"Objets.h"


class Room
{
private:
    int _x = 0;
    int _y = 0;
    int _l = 0;
    int _L = 0;

    std::vector<Objets> instaces;
public:
    Room();
    
    int x() const;
    int y() const;
    int l() const;
    int L() const;
    void x(const int x);
    void y(const int y);
    void l(const int l);
    void L(const int L);

    

    void set_Room(const std::vector<Objets> Room);
    char get_char(const int k) const;

};