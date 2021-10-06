#include <iostream>
#include "tipocomb.h"
using namespace std;

Tipocomb::Tipocomb(Tcombustibile _comb){
    comb = _comb;
    cout << (*this) << " Creato" << endl;
}
Tipocomb::~Tipocomb(){
    cout << (*this) << " Creato" << endl;
}

ostream& operator << (ostream& os, const Tipocomb& tc){
    switch (tc.comb){
        case DIESEL: os << "DIESEL"; break;
        case BENZINA: os << "BENZINA"; break;
        case GPL: os << "GPL"; break;
        default : os << "BOH";
    }
    return os;
}