#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main(){

    Chef kokki("Mario");

    cout << kokki.makeSalad(10) << endl;
    cout << kokki.makeSoup(6) << endl;
    cout << endl;

    ItalianChef italy("Luigi");

    cout << italy.makeSalad(5) << endl;
    cout << italy.makeSoup(3) << endl;
    cout << italy.askSecret("", 15, 15);



    return 0;


}
