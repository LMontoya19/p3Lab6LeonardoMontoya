#include "PPMixtas.h"
#include <vector>
using std::vector;
PPMixtas::PPMixtas(int pmax, string paseguradora, string pNombre, string pUbicacion, double pingresos, double pegresos, double pgneta, bool pFuncionamiento, int pano)
{
    maxclients = pmax;
    aseguradora = paseguradora;
    nombre = pNombre;
    ubicacion = pUbicacion;
    ingresos = pingresos;
    egresos = pegresos;
    gneta = pgneta;
    funcionamiento = pFuncionamiento;
    ano = pano;
}
void PPMixtas::addCliente(cliente *ncliente)
{
    clientes.push_back(ncliente);
}
PPMixtas::~PPMixtas(){
    for (int i = 0; i < clientes.size(); i++)
    {
        delete clientes[i];
    };
    
}