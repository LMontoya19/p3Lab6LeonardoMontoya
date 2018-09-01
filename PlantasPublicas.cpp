#include "PlantasPublicas.h"

PlantasPublicas::PlantasPublicas(int pmax,string paseguradora,string pNombre,string pUbicacion,double pingresos,double pegresos,double pgneta,bool pFuncionamiento,int pano){
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
PlantasPublicas::PlantasPublicas(){
    maxclients = 0;
    aseguradora = "";
    nombre = "";
    ubicacion = "";
    ingresos = 0;
    egresos = 0;
    gneta = 0;
    funcionamiento = false;
    ano = 0;
}
int PlantasPublicas::getMaxclients(){
    return maxclients;
}
string PlantasPublicas::getAseguradora(){
    return aseguradora;
}