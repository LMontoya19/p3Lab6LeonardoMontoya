#ifndef CLIENTEEMPRESARIAL_H
#define CLIENTEEMPRESARIAL_H
#include "Cliente.h"
#include <string>
using std::string;
class ClienteEmpresarial: public cliente{
    protected:
        int popularidad;
        string numerotelefonico;
    public:
        ClienteEmpresarial();
        ClienteEmpresarial(int,string);
        int getPopularidad();
        void setPopularidad(int);
        string getNumerotelefonico();
        void setNumeroTelefonico(string);
};
#endif