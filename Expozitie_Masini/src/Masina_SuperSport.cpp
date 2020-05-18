#include "Masina_SuperSport.h"

Masina_SuperSport& Masina_SuperSport::operator=(Masina_SuperSport& other)
{
    pret=other.pret;
}
istream &operator>>(istream &in,Masina_SuperSport& other)
{
    in>>(Masini&) other;
    cout<<"Introduceti pretul:";
    in>>other.pret;
}
int Masina_SuperSport::getPret()
{
    return pret;
}
