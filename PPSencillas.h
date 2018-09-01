#ifndef PPSENCILLAS_H
#define PPSENCILLAS_H
#include "PlantasPublicas.h"
#include <vector>
#include "Cliente.h"
using std::vector;
class PPSencillas: public PlantasPublicas{
    public:
        vector<cliente*> clientes;
        cliente* tipo;
    public:
        PPSencillas(cliente*,int,string,string,string,double,double,double,bool,int);
        void addCliente(cliente*);
        cliente* getTipo();
        ~PPSencillas();
};
#endif