#include "Plantas.h"

Plantas::Plantas(){
    nombre = "";
    ubicacion = "";
    ingresos = 0;
    egresos = 0;
    gneta = 0;
    funcionamiento = false;
}
Plantas::Plantas(string pNombre,string pUbicacion,double pingresos,double pegresos,double pgneta,bool pFuncionamiento,int pano){
    nombre = pNombre;
    ubicacion = pUbicacion;
    ingresos = pingresos;
    egresos = pegresos;
    gneta = pgneta;
    funcionamiento = pFuncionamiento;
    ano = pano;
}
string Plantas::getNombre(){
    return nombre;
}
void Plantas::setNombre(string pnombre){
    nombre = pnombre;
}
string Plantas::getUbicacion(){
    return ubicacion;
}
void Plantas::setUbicacion(string pubicacion){
    ubicacion = pubicacion;
}
double Plantas::getIngresos(){
    return ingresos;
}
double Plantas::getEgresos(){
    return egresos;
}
double Plantas::getGneta(){
    return gneta;
}
bool Plantas::getFuncionamiento(){
    return funcionamiento;
}
void Plantas::setFuncionamient(bool f){
    funcionamiento = f;
}
int Plantas::getAno(){
    return ano;
}
void Plantas::setIngresos(double pingresos){
    ingresos = pingresos;
}