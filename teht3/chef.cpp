#include "chef.h"

Chef::Chef(string chefName){

    this->chefName = chefName;
    cout << "Kokki " << chefName << " konstruktori" << endl;

}

string Chef::getName(){

    return chefName;
}

int Chef::makeSalad(int aines){

    cout << getName() << "lla " << "aineksia salaattia varten: " << aines << endl;
    int annostenLkm = aines / 5;
    cout << "valmistaa salaatti annoksia: ";

    return annostenLkm;
}

int Chef::makeSoup(int aines){

    cout << getName() << "lla " << "aineksia keittoa varten: " << aines << endl;
    int annostenLkm = aines / 3;
    cout << "valmistaa keitto annoksia: ";

    return annostenLkm;
}

Chef::~Chef(){

    cout << "Kokki " << getName() << " destruktori"<< endl;
}
