#include <iostream>
#include "asiakas.h"
using namespace std;

int main(){

    Asiakas tili1("Matti Massi", 1000);
    tili1.showSaldo();
    tili1.talletus(200);
    tili1.luotonNosto(500);
    tili1.showSaldo();

    Asiakas tili2("Petteri Penni", 500);
    tili2.showSaldo();

    tili1.showSaldo();
    tili1.tiliSiirto(200,tili2);
    tili2.showSaldo();

    tili1.showSaldo();






    return 0;
}
