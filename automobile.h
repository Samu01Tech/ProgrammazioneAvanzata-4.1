#ifndef __AUTOMOBILE_H__
#define __AUTOMOBILE_H__
#include "tipocomb.h"
#include "motore.h"
#include <string>
using namespace std;

class Automobile{
    private:
        string marca, modello;
        Motore motore;
        Motore* motoreOPZ;
    public:
        Automobile(string ma, string mo, int cil, Tipocomb* ptipo);
        ~Automobile();
        friend ostream& operator<<(ostream& os, const Automobile& a);
        void addMotore(int cil, Tipocomb* ptipo);
};
ostream& operator<<(ostream& os, const Automobile& a);
#endif