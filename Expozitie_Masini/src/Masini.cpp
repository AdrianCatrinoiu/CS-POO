#include "Masini.h"

istream& operator>>(istream& in,Masini& other)
{
    cout<<"Introduceti anul masinii:\n";
    in>>other.an;
}
Masini& Masini::operator=(Masini& other)
{
    an=other.an;
}
