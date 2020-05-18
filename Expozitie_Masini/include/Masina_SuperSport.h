#ifndef MASINA_SUPERSPORT_H
#define MASINA_SUPERSPORT_H
#include<Masini.h>

class Masina_SuperSport:public Masini
{
 private:
        int pret;
    public:
        Masina_SuperSport():Masini()
        {
            pret=0;
        }
        Masina_SuperSport(int an,int pret=0):Masini(an),pret(pret){}
        Masina_SuperSport(const Masina_SuperSport& copie):Masini(copie),pret(copie.pret){}
        Masina_SuperSport& operator=(Masina_SuperSport& other);
        int getPret();
        ~Masina_SuperSport()
        {
            an=0;
        }
        void afisare()
        {
            cout<<"Masina SuperSport: "<<"Anul: "<<an<<" "<<"Pret: "<<pret<<'\n';
        }
        friend istream &operator>>(istream &in,Masina_SuperSport& other);
};

#endif // MASINA_SUPERSPORT_H
