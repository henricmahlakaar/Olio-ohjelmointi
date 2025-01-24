#ifndef CHEF_H
#define CHEF_H
#include <iostream>

using namespace std;

class Chef{
    public:
    Chef();

        Chef(string chefName);
        string getName();
        int makeSalad(int aines);
        int makeSoup(int aines);

    ~Chef();

    private:


    protected:
        string chefName;

};

#endif // CHEF_H
