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
    public:
        Automobile(string ma, string mo, int cil, Tipocomb* ptipo);
        ~Automobile();
        friend ostream& operator<<(ostream& os, const Automobile& a);
};
ostream& operator<<(ostream& os, const Automobile& a);
#endif