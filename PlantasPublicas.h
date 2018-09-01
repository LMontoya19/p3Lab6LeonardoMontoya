#ifndef PLANTASPUBLICAS_H
#define PLANTASPUBLICAS_H
#include "Plantas.h"
#include <string>
using std::string;
class PlantasPublicas:public Plantas{
    protected:
        int maxclients;
        string aseguradora;
    public:
        PlantasPublicas();
        PlantasPublicas(int,string,string,string,double,double,double,bool,int);
        int getMaxclients();
        string getAseguradora();
};
#endif