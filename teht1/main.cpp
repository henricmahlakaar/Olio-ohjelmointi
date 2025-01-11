#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int playerNum;

int game(int maxnum){

    int guessCount = 0;
    maxnum = 10;

    srand(time(0));
    int randomNum = 1 + (rand() % maxnum);
    //Arvotaan satunnainen luku.
    cout << "Arvotaan satunnainen luku: " << randomNum << endl;

    //Kysytään käyttäjältä lukua.
    cout << "Arvaa oikea luku: ";
    cin >> playerNum;

    //Tarkistetaan annettu luku.
    do{
        if(playerNum > randomNum){
            guessCount++;
            cout << "Arvottu luku on pienempi!" << endl;
            cout << "Arvaa luku uudestaan: ";
            cin >> playerNum;

        }
        else if(playerNum < randomNum){
            guessCount++;
            cout << "Arvottu luku on suurempi!" << endl;
            cout << "Arvaa luku uudestaan: ";
            cin >> playerNum;
        }

    }while(playerNum != randomNum);

    cout << "Oikea luku! Peli loppuu..." << endl;
    cout << "Arvausten lkm: ";

    return guessCount;
}

int main()
{
    cout  << game(int()) << endl;
    return 0;
}

