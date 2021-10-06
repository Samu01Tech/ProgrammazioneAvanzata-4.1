#include <iostream>
#include "motore.h"
using namespace std;
Motore::Motore(int cil, Tcombustibile _comb):tipo(_comb){
    cilindrata = cil;
    cout << "Motore Creato" << endl;
};
Motore::~Motore(){
    cout << "Motore Distrutto" << endl;
};
ostream& operator << (ostream& os, const Motore& m){
    os << "---" << endl;
    os << "Cilindrata: " << m.cilindrata << endl;
    os << "Tipo comb: " << m.tipo << endl;
    os << "---";
    return os;
}