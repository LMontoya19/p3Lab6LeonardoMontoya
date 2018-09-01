#include "EmpresarialNacional.h"

EmpresarialNacional::EmpresarialNacional(string pRtn,int pPopularidad,string pNumeroTelefonico,string pNombre,double pFondo){
    rtn = pRtn;
    popularidad = pPopularidad;
    numerotelefonico = pNumeroTelefonico;
    nombre = pNombre;
    fmonetario = pFondo;
}
void EmpresarialNacional::setRtn(string prtn){
    rtn = prtn;
}
string EmpresarialNacional::getRtn(){
    return rtn;
}