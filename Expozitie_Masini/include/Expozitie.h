#ifndef EXPOZITIE_H
#define EXPOZITIE_H
#include <vector>
#include <iostream>
#include <Masini.h>
#include <Masina_Cabrio.h>
#include <Masina_Coupe.h>
#include <Masina_HotHatch.h>
#include <Masina_SuperSport.h>
#include "my_exception.h"
template <class T>
class Expozitie
{
    int nr_masini;
        vector<T*>masini_expuse;
    public:
        Expozitie()
        {
            nr_masini=0;
        }
        ~Expozitie()
        {
            nr_masini=0;
        }
        void adauga_masina_normala()
        {
            int tip;
            nr_masini++;
            T* masina;
            std::cout<<"Introduceti tipul de masina dorit:\n";
            std::cout<<"Apasati tasta 1 pentru Masina Coupe\n";
            std::cout<<"Apasati tasta 2 pentru Masina Cabrio\n";
            std::cout<<"Apasati tasta 3 pentru Masina HotHatch\n";
            cin>>tip;
            if(tip==1)
            {
                masina=new Masina_Coupe;
                std::cout<<"Ati ales Masina Coupe:\n";
                cin>>(Masina_Coupe&)(*masina);
            }
             if(tip==2)
            {
                masina=new Masina_Cabrio;
                std::cout<<"Ati ales Masina Coupe:\n";
                cin>>(Masina_Cabrio&)(*masina);
            }
             if(tip==3)
            {
                masina=new Masina_HotHatch;
                std::cout<<"Ati ales Masina Coupe:\n";
                cin>>(Masina_HotHatch&)(*masina);
            }
            masini_expuse.push_back(masina);
        }

        void afisare()const
        {    try
             {  if(nr_masini==0)
                   throw my_exception("Nu exista nicio masina in expozitie.\n");
                for(int i=0;i<nr_masini;i++)
                   masini_expuse[i]->afisare();
             }
             catch(my_exception f)
             {
                std::cout<<"Nu exista nicio masina in expozitie.\n";
             }
        }
};
template<>
class Expozitie<Masina_SuperSport>
{
private:
     int nr_expuse;
     int nr_vandute;
     vector<Masina_SuperSport*> masini_expuse;
     vector<pair<Masina_SuperSport*,int> >masini_vandute;
public:
    Expozitie()
    {
        nr_expuse=0;
        nr_vandute=0;
    }

    void vinde_masina(int numar_masina)
    {
        try
           {  if(numar_masina>nr_expuse)
                  throw my_exception("Nu exista aceasta masina in expozitie.\n");
              masini_vandute.push_back(make_pair(masini_expuse[numar_masina-1],masini_expuse[numar_masina-1]->getPret()));
              masini_expuse.erase(masini_expuse.begin()+numar_masina-1);
              nr_expuse--;
              nr_vandute++;
              std::cout<<"Masina a fost vanduta!\n";
           }
           catch(my_exception f)
             {
                std::cout<<"Nu exista aceasta masina in expozitie.\n";
             }
    }
    void adauga_masina()
    {
        Masina_SuperSport* masina;
        masina=new Masina_SuperSport;
        cin>>(Masina_SuperSport&)(*masina);
        masini_expuse.push_back(masina);
        nr_expuse++;
    }
    void afisare_expuse()const
       {
           try
             {
                    if(nr_expuse==0)
                        throw my_exception("Nu exista masini SuperSport expuse.\n");
                 for(int i=0;i<nr_expuse;i++)
                    masini_expuse[i]->afisare();
                 std::cout<<'\n';
             }
            catch(my_exception f)
             {
                std::cout<<"Nu exista masini SuperSport expuse.\n";
             }
       }
       void afisare_vandute()const
       {
           try
             {  if(nr_vandute==0)
                    throw my_exception("Nu exista masini SuperSport vandute.\n");
                for(int i=0;i<nr_vandute;i++)
                {
                    std::cout<<"Detalii:";
                    masini_vandute[i].first->afisare();
                    std::cout<<"Pret Vanzare:"<<masini_vandute[i].second<<" ";
                    std::cout<<'\n';
                }
             }
              catch(my_exception f)
                 {
                    std::cout<<"Nu exista masini SuperSport vandute.\n";
                 }
       }
       Expozitie &operator-=(int i)
       {
           vinde_masina(i);
       }
    ~Expozitie()
    {
        nr_expuse=0;
        nr_vandute=0;
    }

};
#endif // EXPOZITIE_H
