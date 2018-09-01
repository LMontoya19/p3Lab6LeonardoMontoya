#include "EmpresarialInternacional.h"
#include <string>
using std::string;
EmpresarialInternacional::EmpresarialInternacional(string pPais,int pSucursales,int pPopularidad,string pNumeroTelefonico,string pNombre,double pFondo){
    pais = pPais;
    sucursales=pSucursales;
    popularidad = pPopularidad;
    numerotelefonico = pNumeroTelefonico;
    nombre=pNombre;
    fmonetario = pFondo;
}
void EmpresarialInternacional::setPais(string ppais){
    pais = ppais;
}
string EmpresarialInternacional::getPais(){
    return pais;
}
int EmpresarialInternacional::getSucursales(){
    return sucursales;
}
void EmpresarialInternacional::setSucursales(int psucursales){
    sucursales = psucursales;
}
