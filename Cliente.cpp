#include "Cliente.h"

cliente::cliente(){
    nombre="Empleado";
    fmonetario=0;
}
cliente::cliente(string pNombre,double pFondo){
    nombre=pNombre;
    fmonetario=pFondo;
}
string cliente::getNombre(){
    return nombre;
}
double cliente::getFondo(){
    return fmonetario;
}
void cliente::setFondo(double pfondo){
    fmonetario = pfondo;
}
void cliente::setNombre(string pNombre){
    nombre = pNombre;
}
