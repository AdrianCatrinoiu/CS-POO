#include "Masina_Cabrio.h"

Masina_Cabrio& Masina_Cabrio::operator=(Masina_Cabrio& other)
{
    mat_acoperis=other.mat_acoperis;
}
istream &operator>>(istream &in,Masina_Cabrio& other)
{
    in>>(Masini&) other;
    cout<<"Introduceti materialul acoperisului:\n";
    in>>other.mat_acoperis;
}

