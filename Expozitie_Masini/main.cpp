#include <vector>
#include <iostream>
#include <Masini.h>
#include <Masina_Cabrio.h>
#include <Masina_Coupe.h>
#include <Masina_HotHatch.h>
#include <Masina_SuperSport.h>
#include <my_exception.h>
#include<Expozitie.h>
using namespace std;

int main()
{
    int selectie,numar_masina;
    Expozitie<Masini>masina;
    Expozitie<Masina_SuperSport>masina_SuperSport;

    cout<<"Va rugam selectati una dintre variantele de mai jos:\n";
    cout<<"1->Adaugati o masina Coupe/Cabrio/HotHatch\n";
    cout<<"2->Afisati expozitia de masini Coupe/Cabrio/HotHatch\n";
    cout<<"3->Adaugati o masina SuperSport\n";
    cout<<"4->Vindeti o masina SuperSport\n";
    cout<<"5->Afisati masinile SuperSport expuse\n";
    cout<<"6->Afisati masinile SuperSport vandute\n";
    cout<<"0->Iesiti din aplicatie;\n";
    cin>>selectie;
    while(selectie!=0)
    {
        if(selectie==1)
        {
            masina.adauga_masina_normala();        }
        if(selectie==2)
        {
            masina.afisare();
        }
        if(selectie==3)
        {
            masina_SuperSport.adauga_masina();
        }
        if(selectie==4)
        {
            cout<<"Care masina sa fie vanduta?:\n";
            cin>>numar_masina;
            masina_SuperSport-=numar_masina;
        }
        if(selectie==5)
        {
            masina_SuperSport.afisare_expuse();
        }
        if(selectie==6)
        {
            masina_SuperSport.afisare_vandute();
        }
        cout<<"\n\n";
        cout<<"Va rugam selectati una dintre variantele de mai jos:\n";
        cout<<"1->Adaugati o masina Coupe/Cabrio/HotHatch\n";
        cout<<"2->Afisati expozitia de masini Coupe/Cabrio/HotHatch\n";
        cout<<"3->Adaugati o masina SuperSport\n";
        cout<<"4->Vindeti o masina SuperSport\n";
        cout<<"5->Afisati masinile SuperSport expuse\n";
        cout<<"6->Afisati masinile SuperSport vandute\n";
        cout<<"0->Iesiti din aplicatie;\n";
        cin>>selectie;
    }


    return 0;
}
