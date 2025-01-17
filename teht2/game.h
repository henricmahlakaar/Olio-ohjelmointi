#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <ctime>

using namespace std;

class Game
{
public:

    Game(int num);
    void play();
    ~Game();

private:

    void printGameResult();
    int maxNumber;
    int playerGuess = 0;
    int randomNumber;
    int numOfGuesses;

};

#endif // GAME_H
