#ifndef EMPRESARIALINTERNACIONAL_H
#define EMPRESARIALINTERNACIONAL_H
#include "ClienteEmpresarial.h"
#include <string>
using std::string;
class EmpresarialInternacional:public ClienteEmpresarial{
    private:
        string pais;
        int sucursales;
    public:
        EmpresarialInternacional(string,int,int,string,string,double);
        string getPais();
        void setPais(string);
        int getSucursales();
        void setSucursales(int);
};
#endif