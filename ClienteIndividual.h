#ifndef CLIENTEINDIVIDUAL_H
#define CLIENTEINDIVIDUAL_H
#include<string>
using std::string;
#include "Cliente.h"
class ClienteIndividual: public cliente{
    private:
        string identidad;
        string estudio;
        bool gobierno;
    public:
        ClienteIndividual(string,string,bool,string,double);
        string getIdentidad();
        void setIdentidad(string);
        string getEstudio();
        void setEstudio(string);
        bool getGobierno();
        void setGobierno(bool);
};
#endif