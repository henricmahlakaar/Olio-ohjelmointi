#include "asiakas.h"
#include "pankkitili.h"
#include "luottotili.h"



Asiakas::Asiakas(string nimi, double luotto):luottotili(nimi,luotto){
    this->nimi = nimi;
    cout << "Asiakkuus luotu: " << nimi << endl;
    cout << "Luottoraja: " << luotto << endl;
    cout <<"-----------------------------------------";
    cout << endl;
}

string Asiakas::getNimi(){


    return nimi;
}

void Asiakas::showSaldo(){

    cout << getNimi() <<" "<< "pankkitilin saldo: " << kayttotili.getBalance() << endl;
    cout << getNimi() <<" "<< "luottotilin saldo: " << luottotili.getBalance() << endl;
    cout << "--------------------------------------" << endl;

}

bool Asiakas::talletus(double talletus){

    cout << "Pankkitilille " << getNimi() << " talletettu: "<< talletus << endl;
    cout << "--------------------------------------" << endl;
    return kayttotili.deposit(talletus);
}

bool Asiakas::nosto(double nosto){

    cout << "Pankkitililta " << getNimi() << " nostettu: "<< nosto << endl;
    cout << "--------------------------------------" << endl;
    return kayttotili.withdraw(nosto);
}
bool Asiakas::luotonMaksu(double maksu){


    return luottotili.deposit(maksu);
}

bool Asiakas::luotonNosto(double nosto){


    return luottotili.withdraw(nosto);
}

bool Asiakas::tiliSiirto(double siirto, Asiakas &saaja){

    if(kayttotili.getBalance() < siirto){
        return false;
    }else{
        kayttotili.withdraw(siirto);
        saaja.kayttotili.deposit(siirto);
        cout << siirto << " siirretty tililta: " << getNimi() << endl;
        cout <<"Tilille: " << saaja.getNimi() << endl;
       cout << "--------------------------------------" << endl;
        return true;
    }
}

Asiakas::~Asiakas(){

}
