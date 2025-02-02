#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "pankkitili.h"


class Luottotili:Pankkitili{

public:
    Luottotili(string,double);
    bool deposit(double)override;
    bool withdraw(double)override;
    double getBalance();
    ~Luottotili();


private:


protected:
    double luottoRaja = 0;
    double luottoTili = 0;

};

#endif // LUOTTOTILI_H
