#ifndef PLANTAS_H
#define PLANTAS_H
#include <string>
using std::string;
class Plantas{
    protected:
        string nombre;
        string ubicacion;
        double ingresos;
        double egresos;
        double gneta;
        bool funcionamiento;
        int ano;
    public:
        Plantas();
        Plantas(string,string,double,double,double,bool,int);
        string getNombre();
        void setNombre(string);
        string getUbicacion();
        void setUbicacion(string);
        double getIngresos();
        double getEgresos();
        double getGneta();
        bool getFuncionamiento();
        void setFuncionamient(bool);
        void setIngresos(double);
        int getAno();
};
#endif