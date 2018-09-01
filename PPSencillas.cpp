#include "PPSencillas.h"
#include <iostream>
using std::cout;
using std::endl;
PPSencillas::PPSencillas(cliente* ptipo,int pmax,string paseguradora,string pNombre,string pUbicacion,double pingresos,double pegresos,double pgneta,bool pFuncionamiento,int pano){
    tipo = ptipo;
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
void PPSencillas::addCliente(cliente* ncliente){
    if(typeid(tipo).name()==typeid(ncliente).name()){
        clientes.push_back(ncliente);
    }else{
        cout<<"Esta planta no admite este tipo de cliente"<<endl;
    }
}
cliente* PPSencillas::getTipo(){
    return tipo;
}
PPSencillas::~PPSencillas(){
    for(int i = 0;i<clientes.size();i++){
        delete clientes[i];
    }
    
    
}





