#ifndef MASINA_COUPE_H
#define MASINA_COUPE_H
#include <Masini.h>
#include <iostream>
class Masina_Coupe:public Masini
{
private:
    int nr_usi;
    public:
        Masina_Coupe():Masini()
        {
            nr_usi=0;
        }
        Masina_Coupe(int an,int nr_usi=0):Masini(an),nr_usi(nr_usi){}
        Masina_Coupe(const Masina_Coupe& copie):Masini(copie),nr_usi(copie.nr_usi){}
        Masina_Coupe& operator=(Masina_Coupe& other);
        ~Masina_Coupe()
        {
            an=0;
        }
        void afisare()
        {
            std::cout<<"Masina Masina_Coupe: "<<"Anul: "<<an<<" "<<"Numar usi: "<<nr_usi<<'\n';
        }
        friend istream &operator>>(istream &in,Masina_Coupe& other);
};

#endif // MASINA_COUPE_H
