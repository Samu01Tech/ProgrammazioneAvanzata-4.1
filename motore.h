#ifndef __MOTORE_H__
#define __MOTORE_H__
#include "tipocomb.h"

class Motore{
    private:
        int cilindrata;
        //Tipocomb tipo; 
        Tipocomb* tipo1; //obbligatorio
        Tipocomb* tipo2; //opzionale
    public:
        //Motore(int cil, Tcombustibile _comb);
        Motore(int cil, Tipocomb* ptipo);
        ~Motore();
        friend ostream& operator<<(ostream& os, const Motore& m);
        void setTipo2(Tipocomb* ptipo);
};
ostream& operator<<(ostream& os, const Motore& m);
#endif