#include "luottotili.h"
#include "pankkitili.h"

Luottotili::Luottotili(string o, double r):Pankkitili(o){

    this->luottoRaja=r;

    cout << "Luottotili luotu: " << omistaja << endl;



}

bool Luottotili::deposit(double luottoMaksu){

    if(luottoMaksu < 0 || saldo < luottoMaksu){
        cout << "Luoton maksaminen peruttu, ei tarpeeksi katetta..." << endl;
        return false;
    }else {
        saldo -= luottoMaksu;
        luottoRaja += luottoMaksu;
        cout << "Maksetun luoton summa: " << luottoMaksu << endl;
        cout << "Luottotilin saldo: " << luottoTili << endl;
        cout << "Luottotilin raja:" << luottoRaja << endl;

        return true;
    }
}

bool Luottotili::withdraw(double luottoNosto){

    if(luottoNosto < 0 || luottoNosto > luottoRaja){
        cout << "Luoton nostaminen peruttu, ei tarpeeksi luottoa..." << endl;
        return false;
    }else {
        luottoTili += luottoNosto;
        luottoRaja -= luottoNosto;
        cout << omistaja << " luottotilille nostettu luottoa: " << luottoNosto << endl;
        cout << "Luottotilin saldo: " << luottoTili << endl;
        cout << "Luottotilin raja: " << luottoRaja << endl;
        cout << endl;

        return true;
    }

}

double Luottotili::getBalance(){


    //cout << "Luottotilin saldo: ";
    return luottoTili;
}

Luottotili::~Luottotili(){


}
