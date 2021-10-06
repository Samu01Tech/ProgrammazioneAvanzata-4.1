#include <iostream>
#include "motore.h"
using namespace std;
// Motore::Motore(int cil, Tcombustibile _comb):tipo(_comb){
//     cilindrata = cil;
//     cout << "Motore Creato" << endl;
// };
Motore::~Motore(){
    cout << "Motore Distrutto" << endl;
};
ostream& operator << (ostream& os, const Motore& m){
    os << "---" << endl;
    os << "Cilindrata: " << m.cilindrata << endl;
    //os << "Tipo comb: " << m.tipo << endl;
    os << "Tipo comb: " << *(m.tipo1); 
    if(m.tipo2 != NULL) os <<  "-" << *(m.tipo2);
    os << endl << "---";
    return os;
}

Motore::Motore(int cil, Tipocomb* ptipo){
    cilindrata = cil; tipo1 = ptipo; tipo2 = NULL;
    cout << "Motore Costruito" << endl;
}

void Motore::setTipo2(Tipocomb* ptipo){
    this->tipo2 = ptipo;
}