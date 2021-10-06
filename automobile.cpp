#include <iostream>
#include "automobile.h"
using namespace std;

Automobile::Automobile(string ma, string mo, int cil, Tipocomb* ptipo):motore(cil, ptipo){
    marca = ma;
    modello = mo;
    motoreOPZ = NULL;
    cout << "Auto Creata" << endl;
};
Automobile::~Automobile(){
    cout << "Distruzione di" << endl << *(motoreOPZ) << "\nin corso..." << endl;
    delete motoreOPZ;
    cout << "Auto Distrutta sehhhhh" << endl;
};

ostream& operator<<(ostream& os, const Automobile& a){
    return os << a.marca << a.modello << endl << a.motore << endl;
};

void Automobile::addMotore(int cil, Tipocomb* ptipo){
    motoreOPZ = new Motore(cil, ptipo);
};