#include "ClienteEmpresarial.h"

ClienteEmpresarial::ClienteEmpresarial(int pPopularidad, string pNumerotelefonica)
{
    popularidad = pPopularidad;
    numerotelefonico = pNumerotelefonica;
}
ClienteEmpresarial::ClienteEmpresarial()
{
    popularidad = 0;
    numerotelefonico = "";
}
int ClienteEmpresarial::getPopularidad()
{
    return popularidad;
}
void ClienteEmpresarial::setPopularidad(int pPopularidad)
{
    popularidad = pPopularidad;
}
string ClienteEmpresarial::getNumerotelefonico()
{
    return numerotelefonico;
}
void ClienteEmpresarial::setNumeroTelefonico(string pnumerotelefonico)
{
    numerotelefonico = pnumerotelefonico;
}