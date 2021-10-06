#ifndef __MOTORE_H__
#define __MOTORE_H__
#include "tipocomb.h"

class Motore{
    private:
        int cilindrata;
        Tipocomb tipo; 
    public:
        Motore(int cil, Tcombustibile _comb);
        ~Motore();
        friend ostream& operator<<(ostream& os, const Motore& m);
};
ostream& operator<<(ostream& os, const Motore& m);
#endif