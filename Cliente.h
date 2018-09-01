#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using std::string;
class cliente{
    protected:
        string nombre;
        double fmonetario;
    public:
        cliente();
        cliente(string,double);
        string getNombre();
        void setNombre(string);
        void setFondo(double);
        double getFondo();
};
#endif