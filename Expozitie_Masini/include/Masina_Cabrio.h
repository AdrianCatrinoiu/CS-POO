#ifndef MASINA_CABRIO_H
#define MASINA_CABRIO_H
#include <Masini.h>
#include <iostream>

class Masina_Cabrio:public Masini
{
   private:
        string mat_acoperis;
    public:
        Masina_Cabrio():Masini()
        {
            mat_acoperis="";
        }
        Masina_Cabrio(int an,string mat_acoperis=""):Masini(an),mat_acoperis(mat_acoperis){}
        Masina_Cabrio(const Masina_Cabrio& copie):Masini(copie),mat_acoperis(copie.mat_acoperis){}
        Masina_Cabrio& operator=(Masina_Cabrio& other);
        ~Masina_Cabrio()
        {
            an=0;
        }
        void afisare()
        {
            std::cout<<"Masina Cabrio: "<<"Anul: "<<an<<" "<<"Material acoperis: "<<mat_acoperis<<'\n';
        }
        friend istream &operator>>(istream &in,Masina_Cabrio& other);

};

#endif // MASINA_CABRIO_H
