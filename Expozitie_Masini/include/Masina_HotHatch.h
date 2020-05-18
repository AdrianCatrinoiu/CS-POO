#ifndef MASINA_HOTHATCH_H
#define MASINA_HOTHATCH_H
#include <Masini.h>
#include <iostream>
class Masina_HotHatch:public Masini
{
    private:
        string culoare;
    public:
        Masina_HotHatch():Masini()
        {
            culoare="";
        }
        Masina_HotHatch(int an,string culoare=""):Masini(an),culoare(culoare){}
        Masina_HotHatch(const Masina_HotHatch& copie):Masini(copie),culoare(copie.culoare){}
        Masina_HotHatch& operator=(Masina_HotHatch& other);
        ~Masina_HotHatch()
        {
            an=0;
        }
        void afisare()
        {
            std::cout<<"Masina HotHatch: "<<"Anul: "<<an<<" "<<"Culoare: "<<culoare<<'\n';
        }
        friend istream &operator>>(istream &in,Masina_HotHatch& other);
};

#endif // MASINA_HOTHATCH_H
