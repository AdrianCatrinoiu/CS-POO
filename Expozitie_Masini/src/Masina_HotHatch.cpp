#include "Masina_HotHatch.h"

Masina_HotHatch& Masina_HotHatch::operator=(Masina_HotHatch& other)
{
    culoare=other.culoare;
}
istream &operator>>(istream &in,Masina_HotHatch& other)
{
    in>>(Masini&) other;
    cout<<"Introduceti culoarea:\n";
    in>>other.culoare;
}
