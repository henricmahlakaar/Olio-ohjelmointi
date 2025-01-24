<<<<<<< HEAD
#include "game.h"

Game::Game(int num){
    cout << "PELI LUOTU" << endl;
    cout  << endl;
    this->maxNumber = num;
    cout << "Maksimi arvo satunnaisluvulle asetettu: " << maxNumber << endl;
}

Game::~Game(){

    cout << endl;
    cout << "PELI TUHOTTU..." << endl;
}

void Game::play(){
    srand(time(0));
    randomNumber = 1 + rand() % 10;
    cout << "Satunnaisluku arvottu alueelta 1 - 10 " << endl;

    cout << "Arvaa lukua: ";
        cin >> playerGuess;

    do{
        if(playerGuess < randomNumber){
        numOfGuesses++;
        cout << "Arvottu luku on suurempi!" << endl;
        cout << "Anna uusi arvaus: ";
            cin >> playerGuess;
         }else if(playerGuess > randomNumber){

            numOfGuesses++;
            cout << "Arvottu luku pienempi!" << endl;
            cout << "Anna uusi arvaus: ";
                cin >> playerGuess;
        }

    }while(playerGuess != randomNumber);

    if(playerGuess == randomNumber){
        numOfGuesses++;
        cout << "Arvaus oikein!" << endl;
        cout << endl;
        printGameResult();
    }


}

void Game::printGameResult(){
    cout << "                   TULOSTAULU" << endl;
    cout << "                   Arvaustesi lkm: " << numOfGuesses << endl;
    cout << "                   Oikea luku: " << randomNumber << endl;

}
=======
#include "game.h"

Game::Game(int num){
    cout << "PELI LUOTU" << endl;
    cout  << endl;
    this->maxNumber = num;
    cout << "Maksimi arvo satunnaisluvulle asetettu: " << maxNumber << endl;
}

Game::~Game(){

    cout << endl;
    cout << "PELI TUHOTTU..." << endl;
}

void Game::play(){
    srand(time(0));
    randomNumber = 1 + rand() % 10;
    cout << "Satunnaisluku arvottu alueelta 1 - 10 " << endl;

    cout << "Arvaa lukua: ";
        cin >> playerGuess;

    do{
        if(playerGuess < randomNumber){
        numOfGuesses++;
        cout << "Arvottu luku on suurempi!" << endl;
        cout << "Anna uusi arvaus: ";
            cin >> playerGuess;
         }else if(playerGuess > randomNumber){

            numOfGuesses++;
            cout << "Arvottu luku pienempi!" << endl;
            cout << "Anna uusi arvaus: ";
                cin >> playerGuess;
        }

    }while(playerGuess != randomNumber);

    if(playerGuess == randomNumber){
        numOfGuesses++;
        cout << "Arvaus oikein!" << endl;
        cout << endl;
        printGameResult();
    }


}

void Game::printGameResult(){
    cout << "                   TULOSTAULU" << endl;
    cout << "                   Arvaustesi lkm: " << numOfGuesses << endl;
    cout << "                   Oikea luku: " << randomNumber << endl;

}
>>>>>>> 9a7186ecfa15ff3aacd976e0bb6051cb71179b1c
