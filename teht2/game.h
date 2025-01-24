<<<<<<< HEAD
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
=======
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
>>>>>>> 9a7186ecfa15ff3aacd976e0bb6051cb71179b1c
