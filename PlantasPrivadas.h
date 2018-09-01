#ifndef PLANTASPRIVADAS_H
#define PLANTASPRIVADAS_H
#include "Plantas.h"
#include "Cliente.h"
#include <string>
using std::string;
class PlantasPrivadas:public Plantas{
    protected:
        cliente* clienter;
        string banco;
    public:
        PlantasPrivadas(cliente*,string,string,string,double,double,double,bool,int);
        string getBanco();
        cliente* getCliente();

};
#endif