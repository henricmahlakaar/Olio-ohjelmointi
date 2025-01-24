#include "italianchef.h"



ItalianChef::ItalianChef(string chefName) : Chef(chefName){

    cout << "Italian kokki " << getName() << " konstruktori." <<  endl;
}

bool ItalianChef::askSecret(string word, int jauho, int vesi){

    cout << "Salasana pizza reseptiin: ";
    cin >> word;

    if(word == password){
        cout << endl;
        cout << "Aineksia pizzaa varten: " << endl;
        cout << "Vesi: " << vesi << endl;
        cout << "Jauho: "<< jauho << endl;
        return makepizza(jauho, vesi);
    }else{
        cout << "Ei oikeutta pizza reseptiin!" << endl;
        return 0;
    }; 

}

int ItalianChef::makepizza(int jauho, int vesi){

    int pizzaCount = 0;

    do{
        jauho -= 5 ;
        vesi -= 5 ;
        pizzaCount++;

    }while(jauho >= 5 && vesi >= 5);

    cout << "Valmistaa pizzoja: " << pizzaCount << endl;

    return pizzaCount;
}

ItalianChef::~ItalianChef(){
    cout << endl;
    cout << "Italian kokki " << getName() << " destruktori" << endl;
}

