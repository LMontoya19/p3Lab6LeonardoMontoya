#ifndef EMPRESARIALNACIONAL_H
#define EMPRESARIALNACIONAL_H
#include "ClienteEmpresarial.h"
#include <string>
using std::string;
class EmpresarialNacional:public ClienteEmpresarial{
    private:
        string rtn;
    public:
        EmpresarialNacional(string,int,string,string,double);
        void setRtn(string);
        string getRtn();
};
#endif