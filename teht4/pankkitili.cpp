#include "pankkitili.h"
#include "luottotili.h"

Pankkitili::Pankkitili(){
}


Pankkitili::Pankkitili(string o){

    this->omistaja = o;
    cout << "Pankkitili luotu: " << o << endl;



}

double Pankkitili::getBalance(){

    return saldo;
}

bool Pankkitili::deposit(double pankkiMaksu){


    if(pankkiMaksu < 0){
        cout << "Talletus peruutettu" << endl;
        return false;
    } else {
        saldo += pankkiMaksu;
        return true;
    }

}

bool Pankkitili::withdraw(double pankkiNosto){

    if(pankkiNosto > saldo){
        cout << "Pankkitilin katevaraus ylitetty" << endl;
        return false;
    }else {
        saldo -= pankkiNosto;
        return true;
    }
}

Pankkitili::~Pankkitili(){

}
