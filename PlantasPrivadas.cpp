#include "PlantasPrivadas.h"

PlantasPrivadas::PlantasPrivadas(cliente* pcliente,string pbanco,string pNombre,string pUbicacion,double pingresos,double pegresos,double pgneta,bool pFuncionamiento,int pano){
    clienter = pcliente;
    banco = pbanco;
    ubicacion = pUbicacion;
    ingresos = pingresos;
    egresos= pegresos;
    gneta = pgneta;
    funcionamiento = pFuncionamiento;
    ano = pano;
}
string PlantasPrivadas::getBanco(){
    return banco;
}
cliente* PlantasPrivadas::getCliente(){
    return clienter;
}