#include "Masina_Coupe.h"

Masina_Coupe& Masina_Coupe::operator=(Masina_Coupe& other)
{
    nr_usi=other.nr_usi;
}
istream &operator>>(istream &in,Masina_Coupe& other)
{
    in>>(Masini&) other;
    cout<<"Introduceti numarul de usi:";
    in>>other.nr_usi;
}
