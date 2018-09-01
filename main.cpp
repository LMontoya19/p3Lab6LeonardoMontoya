#include "ClienteEmpresarial.h"
#include "Cliente.h"
#include "ClienteIndividual.h"
#include "EmpresarialInternacional.h"
#include "EmpresarialNacional.h"
#include "Plantas.h"
#include "PlantasPrivadas.h"
#include "PlantasPublicas.h"
#include "PPMixtas.h"
#include "PPSencillas.h"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    Plantas *aplantas[10];
for (int i = 0; i < 10; i++)
    {
        aplantas[i] = NULL;
    }
    int cplantas = 0;
    char resp = 's';
    while (resp == 's')
    {
        char opmenu;
        cout << "1)Crear Planta" << endl;
        cout << "2)Eliminar Imperio" << endl;
        cout << "3) Listar Plantas"<<endl;
        cout << "4)Salir" << endl;
        cout << "Ingrese su opcion: " << endl;
        cin >> opmenu;
        switch (opmenu)
        {
        case '1':
        {
            cplantas++;
            if (cplantas < 10)
            {
                string nplanta;
                int anof;
                cout << "Ingrese el nombre de la planta" << endl;
                cin >> nplanta;
                cout << "Ingrese año de fundacion" << endl;
                cin >> anof;
                bool tplanta = false;
                while (tplanta == false)
                {
                    char privopub;
                    cout << "a)Planta Publica" << endl;
                    cout << "b)Planta Privada" << endl;
                    cin >> privopub;
                    if (privopub == 'a')
                    {
                        string aseguradora;
                        int max;
                        cout << "Ingrese nombre de la aseguradora:" << endl;
                        cin >> aseguradora;
                        cout << "Ingrese maximo de clientes que puede tener" << endl;
                        cin >> max;
                        bool somix = false;
                        char senomix;
                        while (somix == false)
                        {
                            cout << "1)Sencilla" << endl;
                            cout << "2)Mixta" << endl;
                            cin >> senomix;
                            switch (senomix)
                            {
                            case '1':
                            {
                                char emposen;
                                bool empresarialoindividual = false;
                                while (empresarialoindividual == false)
                                {
                                    cout << "1)Planta Sencilla de Clientes Empreseriales" << endl;
                                    cout << "2)Planta Sencilla de Clientes Individuales" << endl;
                                    cin >> emposen;
                                    switch (emposen)
                                    {
                                    case '1':
                                    {
                                        PPSencillas *temp = new PPSencillas(new ClienteEmpresarial(), max, aseguradora, nplanta, "c", 0, 0, 0, true, anof);
                                        cplantas++;
                                        bool aempleados = false;
                                        while (aempleados == false)
                                        {
                                            char opaempleado;
                                            cout << "1) Agregar Cliente" << endl;
                                            cout << "2)Dejar de agregar clientes" << endl;
                                            cin >> opaempleado;
                                            switch (opaempleado)
                                            {
                                            case '1':
                                            {
                                                char interonacional;
                                                cout << "1)Cliente Internacional" << endl;
                                                cout << "2)Cliente Nacional" << endl;
                                                cin >> interonacional;
                                                if (interonacional == '1')
                                                {
                                                    string nombre;
                                                    double fmonetario;
                                                    cout << "Ingrese nombre" << endl;
                                                    cin >> nombre;
                                                    cout << "Ingrese fondo monetario" << endl;
                                                    cin >> fmonetario;
                                                    temp->addCliente(new EmpresarialInternacional(" ", 0, 0, "", nombre, fmonetario));
                                                }
                                                else if (interonacional == '2')
                                                {
                                                    string nombre;
                                                    double fmonetario;
                                                    cout << "Ingrese nombre" << endl;
                                                    cin >> nombre;
                                                    cout << "Ingrese fondo monetario" << endl;
                                                    cin >> fmonetario;
                                                    temp->addCliente(new EmpresarialNacional(" ", 0, "", nombre, fmonetario));
                                                }
                                                int ingreso = 0;
                                                for (int i = 0; i < temp->clientes.size(); i++)
                                                {
                                                    ingreso += temp->clientes[i]->getFondo();
                                                }
                                                temp->setIngresos(ingreso);

                                                break;
                                            }
                                            case '2':
                                            {
                                                aempleados = true;
                                                break;
                                            }
                                            }
                                        }
                                        aplantas[cplantas] = temp;
                                        empresarialoindividual = true;
                                        delete temp;
                                        break;
                                    }
                                    case '2':
                                    {
                                        PPSencillas *temp = new PPSencillas(new ClienteIndividual("", "", false, "", 0), max, aseguradora, nplanta, "c", 0, 0, 0, true, anof);
                                        bool aempleados = false;
                                        while (aempleados == false)
                                        {
                                            char opaempleado;
                                            cout << "1) Agregar Cliente" << endl;
                                            cout << "2)Dejar de agregar clientes" << endl;
                                            cin >> opaempleado;
                                            switch (opaempleado)
                                            {
                                            case '1':
                                            {
                                                char interonacional;
                                                cout << "1)Cliente Internacional" << endl;
                                                cout << "2)Cliente Nacional" << endl;
                                                cin >> interonacional;

                                                string nombre;
                                                double fmonetario;
                                                cout << "Ingrese nombre" << endl;
                                                cin >> nombre;
                                                cout << "Ingrese fondo monetario" << endl;
                                                cin >> fmonetario;
                                                temp->addCliente(new ClienteIndividual(" ", "", false, "", fmonetario));

                                                int ingreso = 0;
                                                for (int i = 0; i < temp->clientes.size(); i++)
                                                {
                                                    ingreso += temp->clientes[i]->getFondo();
                                                }
                                                temp->setIngresos(ingreso);

                                                break;
                                            }
                                            case '2':
                                            {
                                                aempleados = true;
                                                break;
                                            }
                                            }
                                        }
                                        aplantas[cplantas] = temp;
                                        empresarialoindividual = true;
                                        delete temp;
                                        break;
                                        empresarialoindividual = true;
                                        break;
                                    }
                                    }
                                }
                                somix = true;
                                break;
                            }
                            case '2':
                            {
                                PPMixtas *temp = new PPMixtas(max, aseguradora, nplanta, "c", 0, 0, 0, true, anof);
                                bool aempleados = false;
                                while (aempleados == false)
                                {
                                    char opaempleado;
                                    cout << "1) Agregar Cliente" << endl;
                                    cout << "2)Dejar de agregar clientes" << endl;
                                    cin >> opaempleado;
                                    switch (opaempleado)
                                    {
                                    case '1':
                                    {
                                        char interonacional;
                                        cout << "1)Cliente Internacional" << endl;
                                        cout << "2)Cliente Nacional" << endl;
                                        cin >> interonacional;

                                        string nombre;
                                        double fmonetario;
                                        cout << "Ingrese nombre" << endl;
                                        cin >> nombre;
                                        cout << "Ingrese fondo monetario" << endl;
                                        cin >> fmonetario;
                                        temp->addCliente(new ClienteIndividual(" ", "", false, "", fmonetario));

                                        int ingreso = 0;
                                        for (int i = 0; i < temp->clientes.size(); i++)
                                        {
                                            ingreso += temp->clientes[i]->getFondo();
                                        }
                                        temp->setIngresos(ingreso);

                                        break;
                                    }
                                    case '2':
                                    {
                                        aempleados = true;
                                        break;
                                    }
                                    }
                                }

                                somix = true;
                                aplantas[cplantas]=temp;
                                delete temp;
                                break;
                            }
                            }
                        }
                        tplanta = true;
                    }
                    else if (privopub == 'b')
                    {
                        tplanta = true;
                    }
                }
            }
            break;
        } //Fin case 1
        case '2':
        {
            for (int i = 0; i < 10; i++)
            {
                delete aplantas[i];
            }
            break;
        } //Fin Case 2
        case '3':
        { 
            if(cplantas>0){
            for (int i = 0; i < cplantas-1; i++)
            {
                cout << aplantas[i]->getNombre()<< endl;
            }
            }else{
                 cout << aplantas[0]->getNombre()<< endl;
            }
        }
        case '4':
        {
            resp = 'n';
            break;
        }  //Fin case 3
        }; //Fin switch
    };     //Fin while principal
    for (int i = 0; i < 10; i++)
    {
        delete aplantas[i];
    }
    return 0;
}