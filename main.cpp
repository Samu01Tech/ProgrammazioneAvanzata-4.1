#include <iostream>
//#include "tipocomb.h"
#include "motore.h"
using namespace std;



int main() {
    // Tipocomb cb(BENZINA);
    // cout << cb << endl;
    Motore m(2000, BENZINA);
    cout << m << endl;
    return 0;
}