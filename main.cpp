#include <iostream>
//#include "tipocomb.h"
//#include "motore.h"
#include "automobile.h"
using namespace std;



int main() {
    Tipocomb benzina(BENZINA);
    Tipocomb diesel(DIESEL);
    Tipocomb gpl(GPL);
    // Tipocomb cb(BENZINA);
    // cout << cb << endl;
    //Motore m(2000, BENZINA);
    //cout << m << endl;
    // Motore m(2000, &benzina);
    // Motore m2(600, &benzina);
    // cout << m << endl;
    // m2.setTipo2(&diesel);
    // cout << m2 << endl;
    Automobile a1("Fiat", "Panda", 800, &benzina);
    a1.addMotore(600, &benzina);
    cout << a1 << endl;
    return 0;
}