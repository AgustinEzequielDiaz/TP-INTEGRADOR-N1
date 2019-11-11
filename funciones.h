#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "funciones2.h"
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

void subMenuParcial()
{
    char op[20];
    bool salir=false;
    system("cls");
    while(!salir)
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t||                MENU PARCIAL                   ||"<<endl;
        cout<<"\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t||     1- ELIMINAR ALUMNO                        ||"<<endl;
        cout<<"\t\t\t\t||     2- ALUMNOS ELIMINADOS                     ||"<<endl;
        cout<<"\t\t\t\t||     0- Salir                                  ||"<<endl;
        cout<<"\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t Ingrese una opcion: ";
        cin.getline(op, 1000);
        bool v=validarentero(op);
        while(!v)
        {
            cout<<"\t\t\t\t Ingrese la opcion correctamente: ";
            cin.getline(op, 1000);
            v=validarentero(op);
        }
        int op2=atoi(op);
        system("cls");
        switch(op2)
        {
            case 1:
                {
                    EliminarAlumno();
                }break;
            case 2:
                {
                    AlumnosEliminados();
                }break;
            case 0:
                {
                    salir=true;
                }break;
            default:
                {
                    cout<<"¡INGRESO NO VALIDO!";
                    cin.ignore();
                }
        }
    }
}

void MenuAyudaMenuPrincipal(){
    char op[20];
    bool salir=false;
    system("cls");
    while(!salir)
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t||              AYUDA MENU PRINCIPAL             ||"<<endl;
        cout<<"\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t||     1- ¿QUE HACE?                             ||"<<endl;
        cout<<"\t\t\t\t||     2- ¿QUE ME PERMITE HACER CADA OPCION?     ||"<<endl;
        cout<<"\t\t\t\t||     3- ¿COMO SE UTILIZA?                      ||"<<endl;
        cout<<"\t\t\t\t||     0- Salir                                  ||"<<endl;
        cout<<"\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t Ingrese una opcion: ";
        cin.getline(op, 1000);
        bool v=validarentero(op);
        while(!v)
        {
            cout<<"\t\t\t\t Ingrese la opcion correctamente: ";
            cin.getline(op, 1000);
            v=validarentero(op);
        }
        int op2=atoi(op);
        system("cls");
        switch(op2)
        {
            case 1:
                {
                    quehace();
                }break;
            case 2:
                {
                   quemepermitehacercadaopcion();
                }break;
            case 3:
                {
                   //comoseutiliza();
                }break;
            case 0:
                {
                    salir=true;
                }break;
            default:
                {
                    cout<<"¡INGRESO NO VALIDO!";
                    cin.ignore();
                }
        }
    }
}

void menuAlumno(){
    char op[20];
    bool salir=false;
    system("cls");
    while(!salir)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t||                 MENU DE ALUMNO                ||"<<endl;
        cout<<"\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t||     1- Alta de alumno                         ||"<<endl;
        cout<<"\t\t\t\t||     2- Listado de alumnos                     ||"<<endl;
        cout<<"\t\t\t\t||     0- Salir                                  ||"<<endl;
        cout<<"\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t Ingrese una opcion: ";
        cin.getline(op, 1000);
        bool v=validarentero(op);
        while(!v)
        {
            cout<<" \t\t\t\tIngrese la opcion correctamente: ";
            cin.getline(op, 1000);
            v=validarentero(op);
        }
        int op2=atoi(op);
        system("cls");
        switch(op2)
        {
        case 1:
        {
            tAlumno alu;
            alu.legajo=ObtenerLegajo();
            AltaDeAlumno(&alu);
            if(GuardarAlumno(alu))
            {
                system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tEL ALUMNO SE DIO DE ALTA CORRECTAMENTE";
                cin.ignore();
            }
            else
            {
                system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tEL ALUMNO NO SE PUDO DAR DE ALTA"<<endl;
                cin.ignore();
            }
            cin.ignore();
            system("cls");
        }
        break;
        case 2:
        {
            LeerAlumno();
            cin.ignore();
            system("cls");
        }
        break;
        case 0:
        {
            salir=true;
        }
        break;
        default:
        {
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tOPCION INCORRECTA"<<endl;
            cout<<"\t\t\t\t    Presione ENTER e ingrese una opcion valida";
            cin.ignore();
            system("cls");
        }
        break;
        }
    }
}

void menuMateria(){
    char op[20];
    bool salir=false;
    system("cls");
    while(!salir)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t||                 MENU DE MATERIA               ||"<<endl;
        cout<<"\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t||     1- Alta de materia                        ||"<<endl;
        cout<<"\t\t\t\t||     2- Listado de materias                    ||"<<endl;
        cout<<"\t\t\t\t||     0- Salir                                  ||"<<endl;
        cout<<"\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t Ingrese una opcion: ";
        cin.getline(op, 1000);
        bool v=validarentero(op);
        while(!v)
        {
            cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t Ingrese la opcion correctamente: ";
            cin.getline(op, 1000);
            v=validarentero(op);
        }
        int op2=atoi(op);
        system("cls");
        switch(op2)
        {
        case 1:
        {
            tMateria mat;
            mat.ID=ObtenerID();
            bool v=AltaDeMateria(&mat);
            system("cls");
            if(!v)
            {
            if(GuardarMateria(mat))
            {
                cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\tLA MATERIA FUE DADA DE ALTA CORRECTAMENTE";
            }
            else
            {
                cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\tLA MATERIA NO PUDO SER DADA DE ALTA";
            }
            cin.ignore();
            system("cls");
            }
        }
        break;
        case 2:
        {
            LeerMateria();
            cin.ignore();
            system("cls");
        }
        break;
        case 0:
        {
            salir=true;
        }
        break;
        default:
        {
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tOPCION INCORRECTA"<<endl;
            cout<<"\t\t\t\t    Presione ENTER e ingrese una opcion valida";
            cin.ignore();
            system("cls");
        }
        break;
        }
    }
}

void menuABML(){
    char op[20];
    bool salir=false;
    system("cls");
    while(!salir)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t||                   MENU ABML                   ||"<<endl;
        cout<<"\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t||     1- Asignar alumnos a materias             ||"<<endl;
        cout<<"\t\t\t\t||     2- Lista de alumnos por materia           ||"<<endl;
        cout<<"\t\t\t\t||     3- Modificar Alumno                       ||"<<endl;
        cout<<"\t\t\t\t||     4- Dar de baja un alumno a una materia    ||"<<endl;
        cout<<"\t\t\t\t||     0- Salir                                  ||"<<endl;
        cout<<"\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t Ingrese una opcion: ";
        cin.getline(op, 1000);
        bool v=validarentero(op);
        while(!v)
        {
            cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t Ingrese la opcion correctamente: ";
            cin.getline(op, 1000);
            v=validarentero(op);
        }
        int op2=atoi(op);
        system("cls");
        switch(op2)
        {
        case 1:
        {
            asignacion();
            system("cls");
        }
        break;
        case 2:
        {
            listarAluMat();
            system("cls");
        }
        break;
        case 3:
        {
            int legajo;
            char alumnoAux[50];
            bool v=modificar(&legajo, alumnoAux);
            bool d=confirmarModificacion(alumnoAux);
            if(v && d)
            {
                menumodificacion(&legajo);
            }
            else if(!v){
                cout<<"                 LEGAJO INVALIDO                 "<<endl;
                cout<<"BUSQUE EL LEGAJO DEL ALUMNO EN LISTADO DE ALUMNOS"<<endl;
                cin.ignore();
                cin.get();
            }
            else
            {

            }
            system("cls");
        }
        break;
        case 4:
        {
            BajaLogica();
            system("cls");
        }
        break;
        case 0:
        {
            salir=true;
        }
        break;
        default:
        {
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tOPCION INCORRECTA"<<endl;
            cout<<"\t\t\t\t    Presione ENTER e ingrese una opcion valida";
            cin.ignore();
            system("cls");
        }
        break;
        }
    }
}

void menuPrincipal(){
    char op[20];
    bool salir=false;
    system("cls");
    while(!salir)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t||                MENU PRINCIPAL                 ||"<<endl;
        cout<<"\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t||     1- ALUMNOS                                ||"<<endl;
        cout<<"\t\t\t\t||     2- MATERIAS                               ||"<<endl;
        cout<<"\t\t\t\t||     3- ABML                                   ||"<<endl;
        cout<<"\t\t\t\t||     4- PARCIAL                                ||"<<endl;
        cout<<"\t\t\t\t||     5- AYUDA                                  ||"<<endl;
        cout<<"\t\t\t\t||     0- Salir                                  ||"<<endl;
        cout<<"\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t Ingrese una opcion: ";
        cin.getline(op, 1000);
        bool v=validarentero(op);
        while(!v)
        {
            cout<<"\t\t\t\t Ingrese la opcion correctamente: ";
            cin.getline(op, 1000);
            v=validarentero(op);
        }
        int op2=atoi(op);
        system("cls");
        switch(op2)
        {
        case 1:
        {
            menuAlumno();
        }
        break;
        case 2:

        {
            menuMateria();
        }
        break;
        case 3:
        {
            menuABML();
        }
        break;
        case 4:
        {
            subMenuParcial();
        }
        break;
        case 5:
        {
            MenuAyudaMenuPrincipal();
        }
        break;
        case 0:
        {
            salir=true;
        }
        break;
        default:
        {
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tOPCION INCORRECTA"<<endl;
            cout<<"\t\t\t\t    Presione ENTER e ingrese una opcion valida";
            cin.ignore();
            system("cls");
        }
        }

    }
}

#endif // FUNCIONES_H_INCLUDED
