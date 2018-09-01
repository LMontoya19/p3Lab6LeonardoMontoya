#ifndef PPMIXTAS_H
#define PPMIXTAS_H
#include "PlantasPublicas.h"
#include <vector>
#include "Cliente.h"
using std::vector;
class PPMixtas: public PlantasPublicas{
    public:
        vector<cliente*> clientes;
    public:
         PPMixtas(int,string,string,string,double,double,double,bool,int);
        void addCliente(cliente*);
        ~PPMixtas();
};
#endif