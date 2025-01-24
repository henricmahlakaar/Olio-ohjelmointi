#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"
using namespace std;

class ItalianChef: public Chef{

    public:
        ItalianChef(string getName);
        bool askSecret(string, int, int);
        ~ItalianChef();

    private:
        string password = "taikina";
        int flour;
        int water;
        int makepizza(int, int);


    protected:

};

#endif // ITALIANCHEF_H
