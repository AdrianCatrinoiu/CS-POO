#ifndef MASINI_H
#define MASINI_H
#include <iostream>
using namespace std;
class Masini
{
protected:
    int an;

    public:
      Masini(){an=0;}
        Masini(int an):an(an){}
        Masini(const Masini& copie):an(copie.an){}
        Masini &operator=(Masini& other);
        ~Masini(){an=-1;}
        virtual void afisare()=0;
        friend istream& operator>>(istream& in,Masini& other);
};

#endif // MASINI_H
