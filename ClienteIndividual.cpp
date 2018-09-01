#include "ClienteIndividual.h"

ClienteIndividual::ClienteIndividual(string pIdentidad,string pestudio,bool pGobierno,string pNombre,double pFondo){
    identidad = pIdentidad;
    estudio = pestudio;
    gobierno = pGobierno;
    nombre = pNombre;
    fmonetario = pFondo;
}
string ClienteIndividual::getIdentidad(){
    return identidad;
}
void ClienteIndividual::setIdentidad(string pidentidad){
    identidad = pidentidad;
}
string ClienteIndividual::getEstudio(){
    return estudio;
}
void ClienteIndividual::setEstudio(string pestudio){
    estudio = pestudio;
}
bool ClienteIndividual::getGobierno(){
    return gobierno;
}
void ClienteIndividual::setGobierno(bool pgobierno){
    gobierno = pgobierno;
}
