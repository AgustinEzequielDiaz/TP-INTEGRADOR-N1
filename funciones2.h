#ifndef FUNCIONES2_H_INCLUDED
#define FUNCIONES2_H_INCLUDED
#include <cstdio>
#include <cstring>
#include <windows.h>
#include <iomanip>
#include "funciones.h"

using std::setw;
using std::left;
using std::right;

///CONSTANTES DE LOS ARCHIVOS

const char ALUMNO[]= "alumno.dat";
const char MATERIA[]= "materia.dat";
const char ALUMATE[]= "alumnoymateria.dat";

using namespace std;

///ESTRUCTURAS

struct tMateria{
    int ID;
    char nombre[50];
    char profesor[50];
    bool eliminado;
};

struct tAlumno{
    int legajo;
    char nombre[50];
    int dia_nac;
    int mes_nac;
    int anio_nac;
    bool eliminado;
};

struct alumymat{
    char nombre[50];
    char materia[50];
    int ID;
    int LEGAJO;
    bool ELIMINADO;
};

///PRESENTACION Y DESPEDIDA

void presentacion(){

        cout<<setw(25)<<left<<" "<<" =============================================================================================================="<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                           BIENVENIDOS AL PROGRAMA TP INTEGRADOR DE LABORATORIO II                          ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<" =============================================================================================================="<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||  ALUMNO: AGUSTIN DIAZ                                                                                      ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<" =============================================================================================================="<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||  PROFESOR: FERNANDO CALABUIG                                                                               ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<" =============================================================================================================="<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||  CUATRIMESTRE: 2                                                                                           ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<" =============================================================================================================="<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||  ANIO:2019                                                                                                 ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<" =============================================================================================================="<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||  TECNICATURA UNIVERSITARIA EN PROGRAMACION                                                                 ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<" =============================================================================================================="<<endl;
    }

void despedida(){
        cout<<setw(25)<<left<<" "<<" =============================================================================================================="<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                          GRACIAS POR UTILIZAR EL PROGRAMA TP INTEGRADOR DE LABORATORIO II                  ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                    HASTA LUEGO                                             ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<" =============================================================================================================="<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||  ALUMNO: AGUSTIN DIAZ                                                                                      ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<" =============================================================================================================="<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||  PROFESOR: FERNANDO CALABUIG                                                                               ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<" =============================================================================================================="<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||  CUATRIMESTRE: 2                                                                                           ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<" =============================================================================================================="<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||  ANIO:2019                                                                                                 ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<" =============================================================================================================="<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||  TECNICATURA UNIVERSITARIA EN PROGRAMACION                                                                 ||"<<endl;
        cout<<setw(25)<<left<<" "<<"||                                                                                                            ||"<<endl;
        cout<<setw(25)<<left<<" "<<" =============================================================================================================="<<endl;
    }

///VALIDACIONES

bool validarchar(char *palabra){
    bool v=true;
    int i=0;
    if(palabra[0]=='\0' || palabra[0]==' ')
    {
        return false;
    }
    while(palabra[i]!='\0')
    {
        if(!((palabra[i]>='a' && palabra[i]<='z') || (palabra[i]>='A' && palabra[i]<='Z') || palabra[i]==' '))
        {
            v=false;
        }
        i++;
    }
    return v;
}

bool validarcharSimple(char respuesta){
    bool v=true;
    int i=0;
    if(respuesta=='\0' || respuesta==' ')
    {
        return false;
    }
    if(respuesta!='\0')
    {
        if(!((respuesta>='a' && respuesta<='z') || (respuesta>='A' && respuesta<='Z') || respuesta==' '))
        {
            v=false;
        }
        i++;
    }
    return v;
}

bool BuscarMateriaPorID(int ID, char *materiaAux){
    tMateria mat;
    bool a=true;
    FILE *p;
    p= fopen(MATERIA, "rb");
    if(p!=NULL)
    {
        while(fread(&mat,sizeof(tMateria),1,p)!=0)
        {
            if(ID==mat.ID)
            {
                strcpy(materiaAux, mat.nombre);
                fclose(p);
                return a;
            }
        }
    }
    fclose(p);
    a=false;
    return a;
}

bool BuscarAlumno(int legajo){
    tAlumno alum;
    bool a=false;
    char respuesta;
    FILE *p;
    p=fopen(ALUMNO,"rb");
    if(p!=NULL)
    {
        while(fread(&alum,sizeof(tAlumno),1,p)!=0)
        {
            if(legajo==alum.legajo)
            {
                cout<<"EL ALUMNO QUE DESEA MODIFICAR ES: "<<alum.nombre<<"?"<<endl;
                cout<<"          (RESPONDA S(si) O N(no))      "<<endl;
                cin>>respuesta;
                bool v=validarcharSimple(respuesta);
                while(!v)
                {
                    cout<<"   INGRESE SOLO ""S"" O ""N"" "<<endl;
                    cin>>respuesta;
                    v=validarcharSimple(respuesta);
                }
                switch(respuesta)
                {
                    case 's':
                    case 'S':
                        {
                            fclose(p);
                            a=true;
                            return a;
                        }break;
                    case 'n':
                    case 'N':
                        {
                            cout<<"BUSQUE EN EL LISTADO DE ALUMNOS DENTRO"<<endl;
                            cout<<"DEL MENU DE ALUMNOS EL LEGAJO DEL ALUMNO"<<endl;
                            cout<<"QUE DESEA MODIFICAR";
                            system("cls");
                            fclose(p);
                            return a;
                        }break;
                    default:
                        {
                            cout<<"INGRESO NO VALIDO";
                        }break;
                }
            }
        }
    }
    return a;
}

void ponerCeroAdelante(int numero){
    if(numero<10)
    {
        cout<<"0"<<numero;
    }
    else{
         cout<<numero;
    }
}

bool ValidarAlumno(int legajo, char *alumnoAux){
    tAlumno alum;
    bool existeAlum=false;
    FILE *p;
    p=fopen(ALUMNO,"rb");
    if(p!=NULL)
    {
        while(fread(&alum,sizeof(tAlumno),1,p)!=0)
        {
            if(legajo==alum.legajo && alum.eliminado==false)
            {
                strcpy(alumnoAux, alum.nombre);
                existeAlum=true;
                fclose(p);
            }
        }
        fclose(p);
    }
        return existeAlum;
}

bool ValidarMateriayProfesor(char *materia, char *profesor){
    tMateria reg;
    bool existeMat=false;
    FILE *p;
    p=fopen(MATERIA,"rb");
    if(p!=NULL)
    {
        while(fread(&reg,sizeof(tMateria),1,p)!=0)
        {
            if(strcmp(materia,reg.nombre)==0 && strcmp(profesor,reg.profesor)==0)
            {
                existeMat=true;
                fclose(p);
                return existeMat;
            }
        }
    }
    fclose(p);
    return existeMat;
}

bool validarentero(char *entero){
    bool v=true;
    int i=0;
    if(entero[0]=='\0' || entero[0]==' ')
    {
        return false;
    }
    while(entero[i]!='\0')
    {
        if(entero[i]<'0' || entero[i]>'9')
        {
            v=false;
        }
        i++;
    }
    return v;
}

bool validardia(char *dia){
    bool d=true;
    int dia2=atoi(dia);
    if(dia2<1 || dia2>31)
    {
        return false;
    }
    return d;
}

bool validarmes(char *mes){
    bool d=true;
    int mes2=atoi(mes);
    if(mes2<1 || mes2>12)
    {
        return false;
    }
    return d;

}

bool validaranio(char *anio){
    bool d=true;
    int anio2=atoi(anio);
    if(anio2>2019 && anio2>1000)
    {
        return false;
    }
    return d;
}

///ALTA Y MOSTRAR MATERIAS

int ObtenerID(){
    FILE *p;
    p=fopen(MATERIA, "ab");
    fseek(p, 0, SEEK_END);
    return (ftell(p)/sizeof(tMateria))+1;
}

bool AltaDeMateria(tMateria *mat){
    bool salir=false;
    cout<<setw(40)<<left<<" "<<" ============================="<<endl;
    cout<<setw(40)<<left<<" "<<"||      ALTA DE MATERIA "<<mat->ID<<"   ||"<<endl;
    cout<<setw(40)<<left<<" "<<" ============================="<<endl;
    cout<<setw(40)<<left<<" "<<"|| Nombre de la materia:     ||"<<endl;
    cout<<setw(40)<<left<<" "<<"   ";
    cin.getline(mat->nombre, 50);
    bool v=validarchar(mat->nombre);
    while(!v)
    {
        cout<<setw(40)<<left<<" "<<"   Ingrese solo letras"<<endl;
        cout<<setw(40)<<left<<" "<<"|| Nombre de la materia:        ||"<<endl;
        cout<<setw(40)<<left<<" "<<"   ";
        cin.getline(mat->nombre, 50);
        v=validarchar(mat->nombre);
    }
    cout<<setw(40)<<left<<" "<<"|| Nombre del profesor:      ||"<<endl;
    cout<<setw(40)<<left<<" "<<"   ";
    cin.getline(mat->profesor,50);
    v=validarchar(mat->profesor);
    while(!v)
    {
        cout<<setw(40)<<left<<" "<<"   Ingrese solo letras"<<endl;
        cout<<setw(40)<<left<<" "<<"|| Nombre del profesor:        ||"<<endl;
        cout<<setw(40)<<left<<" "<<"   ";
        cin.getline(mat->profesor, 20);
        v=validarchar(mat->profesor);
    }
    cout<<setw(40)<<left<<" "<<" ============================="<<endl;
    cin.ignore();
    bool c=ValidarMateriayProfesor(mat->nombre, mat->profesor);
    while(c)
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tLA MATERIA DADA POR ESE PROFESOR YA FUE CARGADA";
        cin.ignore();
        salir=true;
        return salir;
    }
    return salir;
}

bool GuardarMateria(tMateria mat){
    bool guardo=false;
    FILE *p;
    p= fopen(MATERIA, "ab");
    if(p!=NULL)
    {
        mat.eliminado=false;
        fseek(p, ftell(p)-sizeof mat, 0);
        fwrite(&mat, sizeof(tMateria),1,p);
        fclose(p);
        guardo=true;
    }
    return guardo;
}

void MostrarMateria(tMateria mat){
    cout<<setw(30)<<left<<" "<<setw(8)<<left<<"|"<<setw(7)<<left<<mat.ID<<"|"<<setw(31)<<left<<mat.nombre<<"|"<<setw(17)<<left<<mat.profesor<<"|"<<endl;
    cout<<setw(30)<<left<<" "<<"------------------------------------------------------------------"<<endl;
}

void LeerMateria(){
    tMateria mat;
    FILE *p;
    p=fopen(MATERIA, "rb");
    if(p!=NULL)
    {
        cout<<setw(30)<<left<<" "<<"------------------------------------------------------------------"<<endl;
        cout<<setw(30)<<left<<" "<<setw(23)<<left<<"|"<<setw(42)<<left<<"LISTADO DE MATERIAS"<<"|"<<endl;
        cout<<setw(30)<<left<<" "<<"------------------------------------------------------------------"<<endl;
        cout<<setw(30)<<left<<" "<<setw(7)<<left<<"|"<<setw(8)<<left<<"N ID"<<setw(13)<<left<<"|"<<setw(19)<<left<<"NOMBRE"<<"|"<<setw(17)<<left<<"PROFESOR"<<"|"<<endl;
        cout<<setw(30)<<left<<" "<<"------------------------------------------------------------------"<<endl;
        while(fread(&mat,sizeof(tMateria),1,p))
        {
            MostrarMateria(mat);
        }
        fclose(p);
    }
}

///ALTA Y MOSTRAR ALUMNOS

int ObtenerLegajo(){
    FILE *p;
    p=fopen(ALUMNO, "ab");
    fseek(p, 0, SEEK_END);
    return (ftell(p)/sizeof(tAlumno))+1;
}

void AltaDeAlumno(tAlumno *alu){
    cout<<setw(40)<<left<<" "<<" ============================================"<<endl;
    cout<<setw(40)<<left<<" "<<"||           ALTA DE ALUMNO "<<alu->legajo<<"               ||"<<endl;
    cout<<setw(40)<<left<<" "<<" ============================================"<<endl;
    cout<<setw(40)<<left<<" "<<"|| Nombre del alumno:                       ||"<<endl;
    cout<<setw(40)<<left<<" "<<"   ";
    cin.getline(alu->nombre, 50);
    cout<<setw(40)<<left<<" "<<" ============================================"<<endl;
    bool v=validarchar(alu->nombre);
    while(!v)
    {
        cout<<setw(40)<<left<<" "<<"|| Ingrese solo letras                      ||"<<endl;
        cout<<setw(40)<<left<<" "<<" ============================================"<<endl;
        cout<<setw(40)<<left<<" "<<"|| Nombre del alumno:                       ||"<<endl;
        cout<<setw(40)<<left<<" "<<"   ";
        cin.getline(alu->nombre, 20);
        cout<<setw(40)<<left<<" "<<" ============================================"<<endl;
        v=validarchar(alu->nombre);
    }
    char dia[10];
    cout<<setw(40)<<left<<" "<<"|| NOTA:Ingrese un numero entero entre 1-31 ||"<<endl;
    cout<<setw(40)<<left<<" "<<"|| Dia de nacimiento:                       ||"<<endl;
    cout<<setw(40)<<left<<" "<<"   ";
    cin.getline(dia, 100);
    //cout<<endl;
    cout<<setw(40)<<left<<" "<<" ============================================"<<endl;
    v=validarentero(dia);
    bool d=validardia(dia);
    while((!v) || (!d))
    {
        cout<<setw(40)<<left<<" "<<"||        ¡FORMATO DE DIA INVALIDO!         ||"<<endl;
        cout<<setw(40)<<left<<" "<<" ============================================"<<endl;
        cout<<setw(40)<<left<<" "<<"|| Dia de nacimiento:                       ||"<<endl;
        cout<<setw(40)<<left<<" "<<"   ";
        cin.getline(dia, 100);
        //cout<<endl;
        cout<<setw(40)<<left<<" "<<" ============================================"<<endl;
        v=validarentero(dia);
        d=validardia(dia);
    }
    alu->dia_nac=atoi(dia);
    char mes[10];
    cout<<setw(40)<<left<<" "<<"|| NOTA:Ingrese un numero entero entre 1-12 ||"<<endl;
    cout<<setw(40)<<left<<" "<<"|| Mes de nacimiento:                       ||"<<endl;
    cout<<setw(40)<<left<<" "<<"   ";
    cin.getline(mes, 100);
    //cout<<endl;
    v=validarentero(mes);
    d=validarmes(mes);
    while((!v) || (!d))
    {
         cout<<setw(40)<<left<<" "<<" ============================================"<<endl;
        cout<<setw(40)<<left<<" "<<"||         ¡FORMATO DE MES INVALIDO!        ||"<<endl;
        cout<<setw(40)<<left<<" "<<" ============================================"<<endl;
        cout<<setw(40)<<left<<" "<<"|| Mes de nacimiento:                       ||"<<endl;
        cout<<setw(40)<<left<<" "<<"   ";
        cin.getline(mes, 100);
        v=validarentero(mes);
        d=validarmes(mes);
    }
    alu->mes_nac=atoi(mes);
    char anio[10];
     cout<<setw(40)<<left<<" "<<" ============================================"<<endl;
    cout<<setw(40)<<left<<" "<<"|| NOTA:Ingrese un numero entero menor al     ||"<<endl;
    cout<<setw(40)<<left<<" "<<"||                 anio actual                ||"<<endl;
    cout<<setw(40)<<left<<" "<<"|| Anio de nacimiento:                        ||"<<endl;
    cout<<setw(40)<<left<<" "<<"   ";
    cin.getline(anio, 100);
    v=validarentero(anio);
    d=validaranio(anio);
    while((!v) || (!d))
    {
        cout<<setw(40)<<left<<" "<<" ============================================"<<endl;
        cout<<setw(40)<<left<<" "<<"||       ¡FORMATO DE ANIO INVALIDO!         ||"<<endl;
        cout<<setw(40)<<left<<" "<<" ============================================"<<endl;
        cout<<setw(40)<<left<<" "<<"|| Anio de nacimiento:                      ||"<<endl;
        cout<<setw(40)<<left<<" "<<"   ";
        cin.getline(anio, 100);
        v=validarentero(anio);
        d=validaranio(anio);
    }
    alu->anio_nac=atoi(anio);
    cout<<setw(40)<<left<<" "<<" ============================================"<<endl;
}

bool GuardarAlumno(tAlumno alu){
    bool guardo=false;
    FILE *p;
    p= fopen(ALUMNO, "ab");
    if(p!=NULL)
    {
        alu.eliminado=false;
        fseek(p, ftell(p)-sizeof alu, 0);
        fwrite(&alu, sizeof(tAlumno),1, p);
        fclose(p);
        guardo=true;
    }
    return guardo;
}

void MostrarAlumno(tAlumno alu){
    cout<<setw(30)<<left<<" "<<setw(8)<<left<<"|"<<setw(8)<<left<<alu.legajo<<"|"<<setw(24)<<left<<alu.nombre<<"|";
    ponerCeroAdelante(alu.dia_nac);
    cout<<"/";
    ponerCeroAdelante(alu.mes_nac);
    cout<<"/"<<setw(13)<<left<<alu.anio_nac<<"|"<<endl;
    cout<<setw(30)<<left<<" "<<"-------------------------------------------------------------"<<endl;
}

void LeerAlumno(){
    tAlumno alu;
    FILE *p;
    p=fopen(ALUMNO, "rb");
    if(p!=NULL)
    {
        cout<<setw(30)<<left<<" "<<"-------------------------------------------------------------"<<endl;
        cout<<setw(30)<<left<<" "<<setw(20)<<left<<"|"<<setw(41)<<left<<"LISTADO DE ALUMNOS"<<"|"<<endl;
        cout<<setw(30)<<left<<" "<<"-------------------------------------------------------------"<<endl;
        cout<<setw(30)<<left<<" "<<setw(5)<<left<<"|"<<setw(11)<<left<<"N LEGAJO"<<setw(10)<<left<<"|"<<setw(15)<<left<<"NOMBRE"<<"|"<<setw(15)<<left<<"FECHA DE NACIMIENTO"<<"|"<<endl;
        cout<<setw(30)<<left<<" "<<"-------------------------------------------------------------"<<endl;
        while(fread(&alu,sizeof(tAlumno),1,p))
        {
            if(alu.eliminado==false)
            {
                MostrarAlumno(alu);
            }
        }
        fclose(p);
    }
}

///ASIGNAR Y MOSTRAR ALUMNOS ASIGNADOS A MATERIAS

int BuscarLegajo(char alumno[50]){
    int legajo=0;
    tAlumno alu;
    FILE *p;
    p= fopen(ALUMNO, "rb");
    if(p!=NULL)
    {
        while(fread(&alu,sizeof(tAlumno),1,p)==1)
        {
            if(strcmp(alumno, alu.nombre)==0)
            {
                fclose(p);
                legajo=alu.legajo;
                return legajo;
            }
        }
    }
    fclose(p);
    return legajo;
}

bool confirmarAsignacion(char *alumnoAux, char *materiaAux){
 char op[20];
    bool devuelve=false;
    system("cls");
    cout<<setw(25)<<left<<" "<<" ============================================================================"<<endl;
    cout<<setw(25)<<left<<" "<<"||¿DESEA ASIGNAR AL ALUMNO: "<<alumnoAux<<" A LA MATERIA "<<materiaAux<<"?"<<"    ||"<<endl;
    cout<<setw(25)<<left<<" "<<"||           1. SI                                                          ||"<<endl;
    cout<<setw(25)<<left<<" "<<"||           2. NO                                                          ||"<<endl;
    cout<<setw(25)<<left<<" "<<"||opcion: ";
    cin.getline(op, 20);
    cout<<setw(25)<<left<<" "<<" ============================================================================"<<endl;
    bool c=validarentero(op);
    while(c==false)
    {

            cout<<setw(25)<<left<<" "<<"||                            OPCION INVALIDA                               ||"<<endl;
            cout<<setw(25)<<left<<" "<<" ============================================================================"<<endl;
            cout<<setw(25)<<left<<" "<<"|| opcion: ";
            cin.getline(op, 50);
            cout<<setw(25)<<left<<" "<<" ============================================================================"<<endl;
            c=validarentero(op);
    }
    int op2=atoi(op);
    switch(op2)
    {
    case 1:
        {
            devuelve=true;
        }break;
    case 2:
        {
            devuelve=false;
        }break;
    default:
        {
            cout<<setw(40)<<left<<" "<<" =================================="<<endl;
            cout<<setw(40)<<left<<" "<<"||        INGRESO INVALIDO        ||"<<endl;
            cout<<setw(40)<<left<<" "<<" =================================="<<endl;
            cin.ignore();
        }break;
    }
    return devuelve;
}

int BuscarMateria(char *materia){
    tMateria mat;
    int ID=-1;
    FILE *p;
    p= fopen(MATERIA, "rb");
    if(p!=NULL)
    {
        while(fread(&mat,sizeof(tMateria),1,p)!=0)
        {
            if(strcmp(materia, mat.nombre)==0)
            {
                ID=mat.ID;
                fclose(p);
            }
        }
    }
    fclose(p);
    return ID;
}

bool GuardarAlumat(int legajo, int ID, char *alumnoAux, char *materiaAux){
    alumymat AM;
    bool guardo=false;
    FILE *p;
    p=fopen(ALUMATE, "ab");
    if(p!=NULL)
    {
        AM.LEGAJO=legajo;
        AM.ID=ID;
        AM.ELIMINADO=false;
        fseek(p, ftell(p)-sizeof AM, 0);
        fwrite(&AM, sizeof(alumymat),1,p);
        fclose(p);
        guardo=true;
    }
    return guardo;
}

void asignacion(){
    char legajo[100];
    char ID[100];
    cout<<setw(40)<<left<<" "<<" =================================="<<endl;
    cout<<setw(40)<<left<<" "<<"||ASIGNACION DE ALUMNOS A MATERIAS||"<<endl;
    cout<<setw(40)<<left<<" "<<" =================================="<<endl;
    cout<<setw(40)<<left<<" "<<"||Ingrese el legajo:              ||"<<endl;
    cout<<setw(40)<<left<<" "<<"   ";
    cin.getline(legajo, 1000);
    bool c=validarentero(legajo);
    while(!c)
    {
            cout<<setw(40)<<left<<" "<<" ----------------------------------"<<endl;
            cout<<setw(40)<<left<<" "<<"||        INGRESO INVALIDO        ||"<<endl;
            cout<<setw(40)<<left<<" "<<" ----------------------------------"<<endl;
            cout<<setw(40)<<left<<" "<<"||Ingrese el legajo:              ||"<<endl;
            cout<<setw(40)<<left<<" "<<"   ";
            cin.getline(legajo, 1000);
            c=validarentero(legajo);
    }
    int legajoint=atoi(legajo);
    char alumnoAux[50];
    bool v=ValidarAlumno(legajoint, alumnoAux);
    if(v)
    {
        cout<<setw(40)<<left<<" "<<" =================================="<<endl;
        cout<<setw(40)<<left<<" "<<"||Ingrese el ID de la materia:    ||"<<endl;
        cout<<setw(40)<<left<<" "<<"   ";
        cin.getline(ID, 100);
        bool d=validarentero(ID);
        while(!d)
        {
                cout<<setw(40)<<left<<" "<<" =================================="<<endl;
                cout<<setw(40)<<left<<" "<<"||Ingrese el ID de la materia:    ||"<<endl;
                cout<<setw(40)<<left<<" "<<"   ";
                cin.getline(ID, 100);
                d=validarentero(ID);
        }
        cout<<setw(40)<<left<<" "<<" =================================="<<endl;
        char materiaAux[50];
        int ID2=atoi(ID);
        bool a=BuscarMateriaPorID(ID2, materiaAux);
        bool z=confirmarAsignacion(alumnoAux, materiaAux);
        if(a && z)
        {
            if(GuardarAlumat(legajoint, ID2, alumnoAux, materiaAux))
            {
                system("cls");
                cout<<setw(40)<<left<<" "<<" =================================="<<endl;
                cout<<setw(40)<<left<<" "<<"||El alumno se asigno a la materia||"<<endl;
                cout<<setw(40)<<left<<" "<<"||         correctamente          ||"<<endl;
                cout<<setw(40)<<left<<" "<<" =================================="<<endl;
                cin.ignore();
            }
            else
            {
                system("cls");
            cout<<setw(40)<<left<<" "<<" =================================="<<endl;
            cout<<setw(40)<<left<<" "<<"||El alumno no se pudo asignar a  ||"<<endl;
            cout<<setw(40)<<left<<" "<<"||           la materia           ||"<<endl;
            cout<<setw(40)<<left<<" "<<" =================================="<<endl;
            cin.ignore();
            }
        }
        else
        {
            system("cls");
            cout<<setw(40)<<left<<" "<<" =================================="<<endl;
            cout<<setw(40)<<left<<" "<<"||    la materia no fue cargada   ||"<<endl;
            cout<<setw(40)<<left<<" "<<" =================================="<<endl;
            cin.ignore();        }
    }
    else
    {
        system("cls");
        cout<<setw(40)<<left<<" "<<" =================================="<<endl;
        cout<<setw(40)<<left<<" "<<"||El alumno no fue cargado en el  ||"<<endl;
        cout<<setw(40)<<left<<" "<<"||            sistema             ||"<<endl;
        cout<<setw(40)<<left<<" "<<" =================================="<<endl;
        cin.ignore();
        system("cls");
        return;
    }
}

void MostrarAsignacion(alumymat alumat){
        if(alumat.ELIMINADO==false)
        {
        cout<<setw(30)<<left<<" "<<setw(15)<<left<<"|"<<setw(18)<<left<<alumat.LEGAJO<<setw(15)<<left<<"|"<<setw(17)<<left<<alumat.ID<<"|"<<endl;
        cout<<setw(30)<<left<<" "<<"------------------------------------------------------------------"<<endl;
        }
}

void listarAluMat(){
    alumymat alumat;
    FILE *p;
    p=fopen(ALUMATE, "rb");
    if(p!=NULL)
    {
        cout<<setw(30)<<left<<" "<<"------------------------------------------------------------------"<<endl;
        cout<<setw(30)<<left<<" "<<setw(20)<<left<<"|"<<setw(45)<<left<<"LISTADO DE ALUMNOS POR MATERIA"<<"|"<<endl;
        cout<<setw(30)<<left<<" "<<"------------------------------------------------------------------"<<endl;
        cout<<setw(30)<<left<<" "<<setw(13)<<left<<"|"<<setw(20)<<left<<"LEGAJO"<<setw(15)<<left<<"|"<<setw(17)<<left<<"ID"<<"|"<<endl;
        cout<<setw(30)<<left<<" "<<"------------------------------------------------------------------"<<endl;

        while(fread(&alumat,sizeof(alumymat),1,p)!=0)
        {
            if(alumat.ELIMINADO==false)
            {
                MostrarAsignacion(alumat);
            }
        }
        fclose(p);
        cin.ignore();
    }
}

///MODIFICAR ALUMNOS

bool confirmarModificacion(char *alumnoAux){
    char op[20];
    bool devuelve=false;
    cout<<setw(25)<<left<<" "<<" ============================================================================"<<endl;
    cout<<setw(25)<<left<<" "<<"||¿DESEA MODIFICAR LOS DATOS DEL ALUMNO: "<<alumnoAux<<"?"<<endl;
    cout<<setw(25)<<left<<" "<<"||            1. SI                                                         ||"<<endl;
    cout<<setw(25)<<left<<" "<<"||            2. NO                                                         ||"<<endl;
    cout<<setw(25)<<left<<" "<<"||opcion: ";
    cin.getline(op, 20);
    cout<<setw(25)<<left<<" "<<" ============================================================================"<<endl;
    bool c=validarentero(op);
    while(c==false)
    {
            cout<<setw(40)<<left<<" "<<" =================================="<<endl;
            cout<<setw(40)<<left<<" "<<"||        INGRESO INVALIDO        ||"<<endl;
            cout<<setw(40)<<left<<" "<<" =================================="<<endl;
            cout<<setw(40)<<left<<" "<<"|| Opcion: ";
            cin.getline(op, 50);
            cout<<setw(40)<<left<<" "<<" =================================="<<endl;
            c=validarentero(op);
    }
    int op2=atoi(op);
    switch(op2)
    {
    case 1:
        {
            devuelve=true;
        }break;
    case 2:
        {
            devuelve=false;
        }break;
    default:
        {
            cout<<setw(40)<<left<<" "<<" =================================="<<endl;
            cout<<setw(40)<<left<<" "<<"||        INGRESO INVALIDO        ||"<<endl;
            cout<<setw(40)<<left<<" "<<" =================================="<<endl;
            cin.ignore();
        }break;
    }
    return devuelve;
}

bool ModificacionNombre(int *legajo){
    bool v=true;
    tAlumno alumnos;
    FILE *p;
    p=fopen(ALUMNO, "rb+");
    if(p!=NULL)
    {
        while(fread(&alumnos,sizeof(alumnos),1,p)==1)
        {
            if(*legajo==alumnos.legajo)
            {
                cout<<setw(40)<<left<<" "<<" ========================================="<<endl;
                cout<<setw(40)<<left<<" "<<"||          MODIFICACION NOMBRE          ||"<<endl;
                cout<<setw(40)<<left<<" "<<" ========================================"<<endl;
                cout<<setw(40)<<left<<" "<<"||Ingrese el nuevo nombre:               ||"<<endl;
                cout<<setw(40)<<left<<" "<<"   ";
                cin.getline(alumnos.nombre,50);
                cout<<setw(40)<<left<<" "<<" ========================================="<<endl;
                fseek(p, ftell(p)-sizeof alumnos, 0);
                fwrite(&alumnos, sizeof alumnos, 1, p);
                fclose(p);
                return v;
                cin.ignore();
            }
        }
    }
    fclose(p);
    v=false;
    return v;
}

bool ModificacionFecha(int *legajo){
    bool v=true;
    tAlumno alumnos;
    FILE *p;
    p=fopen(ALUMNO, "rb+");
    if(p!=NULL)
    {
        while(fread(&alumnos,sizeof(alumnos),1,p)==1)
        {
            if(*legajo==alumnos.legajo)
            {
                cout<<setw(40)<<left<<" "<<" ========================================="<<endl;
                cout<<setw(40)<<left<<" "<<"||          MODIFICACION NOMBRE          ||"<<endl;
                cout<<setw(40)<<left<<" "<<" ========================================"<<endl;
                cout<<setw(40)<<left<<" "<<"||Ingrese el dia nuevo:                  ||"<<endl;
                cout<<setw(40)<<left<<" "<<"   ";
                cin>>alumnos.dia_nac;
                cout<<setw(40)<<left<<" "<<"||Ingrese el mes nuevo:                  ||"<<endl;
                cout<<setw(40)<<left<<" "<<"   ";
                cin>>alumnos.mes_nac;
                cout<<setw(40)<<left<<" "<<"||Ingrese el anio nuevo:                 ||"<<endl;
                cout<<setw(40)<<left<<" "<<"   ";
                cin>>alumnos.anio_nac;
                cout<<setw(40)<<left<<" "<<" ========================================="<<endl;
                fseek(p, ftell(p)-sizeof alumnos, 0);
                fwrite(&alumnos, sizeof alumnos, 1, p);
                fclose(p);
                return v;
                cin.ignore();
            }
        }
    }
    fclose(p);
    v=false;
    return v;
}

void menumodificacion(int *legajo){
    char op[50];
    bool salir=false;
    system("cls");
    while(!salir)
    {
        cout<<" ========================================="<<endl;
        cout<<"||           MENU DE MODIFICACION        ||"<<endl;
        cout<<" ========================================"<<endl;
        cout<<"||     1- Nombre                         ||"<<endl;
        cout<<"||     2- Fecha de nacimiento            ||"<<endl;
        cout<<"||     0- Salir                          ||"<<endl;
        cout<<" ========================================="<<endl;
        cout<<" Ingrese una opcion: ";
        cin.getline(op, 50);
        bool c=validarentero(op);
        while(!c)
        {
            cout<<"||           OPCION INVALIDA         ||"<<endl;
            cout<<" Ingrese una opcion: ";
            cin.getline(op, 50);
            c=validarentero(op);
        }
        int op2=atoi(op);
        system("cls");
        switch(op2)
        {
        case 1:
        {
            bool n=ModificacionNombre(legajo);
            if(n)
            {
                cout<<"EL NOMBRE DEL ALUMNO SE MODIFICO CORRECTAMENTE";
                cin.ignore();
            }
            else{
                cout<<"EL NOMBRE DEL ALUMNO NO SE PUDO MODIFICAR";
                cin.ignore();
            }

        }
        break;
        case 2:
        {
            bool f=ModificacionFecha(legajo);
            if(f)
            {
                cout<<"LA FECHA DE NACIMIENTO DEL ALUMNO SE MODIFICO CORRECTAMENTE";
                cin.ignore();
            }
            else{
                cout<<"LA FECHA DE NACIMIENTO DEL ALUMNO NO SE PUDO MODIFICAR";
                cin.ignore();
            }
        }
        break;
        case 0:
        {
            salir=true;
        }
        break;
        default:
            {
                cout<<"OPCION INVALIDA";
            }break;
        }
    }
}

bool modificar(int *legajo, char *alumnoAux){
    cout<<setw(30)<<left<<" "<<" =================================================================="<<endl;
    cout<<setw(30)<<left<<" "<<setw(20)<<left<<"||"<<setw(45)<<left<<"MODIFICACION           "<<"||"<<endl;
    cout<<setw(30)<<left<<" "<<" =================================================================="<<endl;
    cout<<setw(30)<<left<<" "<<"||Ingrese el legajo del alumno a modificar:                      ||"<<endl;
    cout<<setw(30)<<left<<" "<<"|| ";
    cin>>*legajo;
    cout<<setw(30)<<left<<" "<<" =================================================================="<<endl;
    tAlumno alu;
    FILE *p;
    p= fopen(ALUMNO, "rb");
    if(p!=NULL)
    {
        while(fread(&alu,sizeof(tAlumno),1,p)==1)
        {
            if(*legajo==alu.legajo)
            {
                strcpy(alumnoAux, alu.nombre);
                fclose(p);
                return true;
            }
        }
    }
    fclose(p);
    return false;
}

///DAR DE BAJA ALUMNO DE MATERIA

bool TestearAsignacion(int legajoint, int materiaint){
    bool v=false;
    alumymat BAJA;
    FILE *p;
    p=fopen(ALUMATE, "rb+");
    if(p!=NULL)
    {
        while(fread(&BAJA,sizeof(BAJA),1,p)==1)
        {
            if(legajoint==BAJA.LEGAJO && materiaint==BAJA.ID && BAJA.ELIMINADO==false)
            {
                v=true;
                fclose(p);
            }
        }
        fclose(p);
        system("cls");
    }
        return v;
}

bool ConfirmarBaja(char *alumnoAux, char *materiaAux){
    char op[20];
    bool devuelve;
    cout<<setw(25)<<left<<" "<<" ============================================================================"<<endl;
    cout<<setw(25)<<left<<" "<<"||¿DESEA DAR DE BAJA AL ALUMNO: "<<alumnoAux<<" DE LA MATERIA: "<<materiaAux<<"?"<<"   ||"<<endl;
    cout<<setw(25)<<left<<" "<<"||            1. SI                                                         ||"<<endl;
    cout<<setw(25)<<left<<" "<<"||            2. NO                                                         ||"<<endl;
    cout<<setw(25)<<left<<" "<<"||opcion: ";
    cin.getline(op, 20);
    cout<<setw(25)<<left<<" "<<" ============================================================================"<<endl;
     bool c=validarentero(op);
     while(c==false)
     {

            cout<<setw(25)<<left<<" "<<"||                            OPCION INVALIDA                               ||"<<endl;
            cout<<setw(25)<<left<<" "<<" ============================================================================"<<endl;
            cout<<setw(25)<<left<<" "<<"|| opcion: ";
            cin.getline(op, 50);
            cout<<setw(25)<<left<<" "<<" ============================================================================"<<endl;
            c=validarentero(op);
    }
    int op2=atoi(op);
    switch(op2)
    {
    case 1:
        {
            devuelve=true;
        }break;
    case 2:
        {
            devuelve=false;
        }break;
    default:
        {
            cout<<setw(40)<<left<<" "<<" =================================="<<endl;
            cout<<setw(40)<<left<<" "<<"||        INGRESO INVALIDO        ||"<<endl;
            cout<<setw(40)<<left<<" "<<" =================================="<<endl;
            cin.ignore();
        }break;
    }
    return devuelve;
}

bool RealizarBaja(int legajoint, int materiaint){
    bool v=false;
    alumymat BAJA;
    FILE *p;
    p=fopen(ALUMATE, "rb+");
    if(p!=NULL)
    {
        while(fread(&BAJA,sizeof(BAJA),1,p)==1)
        {
            if(legajoint==BAJA.LEGAJO && materiaint==BAJA.ID)
            {
                BAJA.ELIMINADO=true;
                fseek(p, ftell(p)-sizeof BAJA, 0);
                fwrite(&BAJA, sizeof BAJA,1,p);
                fclose(p);
                v=true;
                return v;
            }
        }
        fclose(p);
        system("cls");
    }
        return v;
}

void BajaLogica(){
    char legajochar[20];
    char materiachar[20];
    cout<<setw(40)<<left<<" "<<" =============================================="<<endl;
    cout<<setw(40)<<left<<" "<<"||                BAJA LOGICA                 ||"<<endl;
    cout<<setw(40)<<left<<" "<<" =============================================="<<endl;
    cout<<setw(40)<<left<<" "<<"||Ingrese el legajo del alumno a dar de baja: ||"<<endl;
    cout<<setw(40)<<left<<" "<<"   ";
    cin.getline(legajochar, 20);
    cout<<setw(40)<<left<<" "<<" =============================================="<<endl;
    bool d=validarentero(legajochar);
    int legajoint=atoi(legajochar);
    char alumnoAux[50];
    bool v=ValidarAlumno(legajoint, alumnoAux);
    while(!v || !d)
    {
        cout<<setw(40)<<left<<" "<<" ----------------------------------------------"<<endl;
        cout<<setw(40)<<left<<" "<<"||        INGRESO INVALIDO                    ||"<<endl;
        cout<<setw(40)<<left<<" "<<" ----------------------------------------------"<<endl;
        cout<<setw(40)<<left<<" "<<"||Ingrese el legajo del alumno a dar de baja: ||"<<endl;
        cout<<setw(40)<<left<<" "<<"   ";
        cin.getline(legajochar, 20);
        cout<<setw(40)<<left<<" "<<" =============================================="<<endl;
        d=validarentero(legajochar);
        v=ValidarAlumno(legajoint, alumnoAux);
    }
    cout<<setw(40)<<left<<" "<<"||Ingrese el ID de la materia a dar de baja: ||"<<endl;
    cout<<setw(40)<<left<<" "<<"   ";
    cin.getline(materiachar, 20);
    cout<<setw(40)<<left<<" "<<" =============================================="<<endl;
    d=validarentero(materiachar);
    int materiaint=atoi(materiachar);
    char materiaAux[50];
    v=BuscarMateriaPorID(materiaint, materiaAux);
    while(!v || !d)
    {
        cout<<setw(40)<<left<<" "<<" ----------------------------------"<<endl;
        cout<<setw(40)<<left<<" "<<"||        INGRESO INVALIDO        ||"<<endl;
        cout<<setw(40)<<left<<" "<<" ----------------------------------"<<endl;
        cout<<setw(40)<<left<<" "<<"||Ingrese el ID de la materia a dar de baja: "<<endl;
        cout<<setw(40)<<left<<" "<<"   ";
        cin.getline(materiachar, 20);
        cout<<setw(40)<<left<<" "<<" =============================================="<<endl;
        d=validarentero(materiachar);
        v=BuscarMateriaPorID(materiaint, materiaAux);
    }
    if(TestearAsignacion(legajoint, materiaint))
    {
        if(ConfirmarBaja(alumnoAux, materiaAux))
        {
            bool x=RealizarBaja(legajoint, materiaint);
            if(x)
            {
                cout<<setw(40)<<left<<" "<<" ======================================================"<<endl;
                cout<<setw(40)<<left<<" "<<"||        EL ALUMNO FUE DADO DE BAJA CON EXITO        ||"<<endl;
                cout<<setw(40)<<left<<" "<<" ======================================================"<<endl;
                cin.ignore();
            }
            else{
            cout<<"EL ALUMNO:  "<<alumnoAux<<" NO PUDO SER DADO DE BAJA DE LA MATERIA: "<<materiaAux<<"."<<endl;
            cin.ignore();
            }
        }

    }
    else{
        cout<<"EL ALUMNADO INGRESADO NO ESTA ASIGNADO A LA MATERIA INDICADA"<<endl;
        cin.ignore();
    }

}

///AYUDAS

void quehace(){
        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t||                  ¿QUE HACE?                   ||"<<endl;
        cout<<"\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t||El menu principal nos da 3 opciones principales||"<<endl;
        cout<<"\t\t\t\t||que son ALUMNOS, MATERIAS Y ABML, una vez que  ||"<<endl;
        cout<<"\t\t\t\t||ingresemos a una de ellas nos dara subfunciones||"<<endl;
        cout<<"\t\t\t\t||para trabajar con esa opcion que ingressamos   ||"<<endl;
        cout<<"\t\t\t\t||anteriormente, al momento de escoger una de    ||"<<endl;
        cout<<"\t\t\t\t||esas 3 opciones debemos pensar que tarea       ||"<<endl;
        cout<<"\t\t\t\t||queremos realizar.                             ||"<<endl;
        cout<<"\t\t\t\t||Por ejemplo:                                   ||"<<endl;
        cout<<"\t\t\t\t||Querer asignar un alumno a una materia sin     ||"<<endl;
        cout<<"\t\t\t\t||antes haber cargado ese alumno y esa materia o ||"<<endl;
        cout<<"\t\t\t\t||sin saber el legajo del alumno o el ID de la   ||"<<endl;
        cout<<"\t\t\t\t||materia, segun sea el caso.                    ||"<<endl;
        cout<<"\t\t\t\t ================================================="<<endl;
        cin.ignore();
}

void quemepermitehacercadaopcion(){
    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t||       ¿QUE ME PERMITE HACER CADA OPCION?      ||"<<endl;
        cout<<"\t\t\t\t ================================================="<<endl;
        cout<<"\t\t\t\t||La opcion 1-ALUMNOS nos permite una vez        ||"<<endl;
        cout<<"\t\t\t\t||ingresada, crear un alumno y listar los alumnos||"<<endl;
        cout<<"\t\t\t\t||que hayamos creado en una tabla de manera      ||"<<endl;
        cout<<"\t\t\t\t||ordenada.                                      ||"<<endl;
        cout<<"\t\t\t\t||La opcion 2-MATERIAS nos permite una vez       ||"<<endl;
        cout<<"\t\t\t\t||ingresada, crear materias y listarlas en una   ||"<<endl;
        cout<<"\t\t\t\t||tabla de manera ordenada.                      ||"<<endl;
        cout<<"\t\t\t\t||La opcion 3-ABML como sus siglas lo dicen nos  ||"<<endl;
        cout<<"\t\t\t\t||permiten modificar alumno, asignar alumnos a   ||"<<endl;
        cout<<"\t\t\t\t||materias, dar de baja alumnos y listar las     ||"<<endl;
        cout<<"\t\t\t\t||asignaciones en una tabla de manera ordenada.  ||"<<endl;
        cout<<"\t\t\t\t||La opcion 4-AYUDA es para que el usuario       ||"<<endl;
        cout<<"\t\t\t\t||aprenda a utilizar el menu.                    ||"<<endl;
        cout<<"\t\t\t\t||La opcion 5-SALIR es para terminar el programa.||"<<endl;
        cout<<"\t\t\t\t ================================================="<<endl;
        cin.ignore();
}

///PARCIAL
            ///ELIMINAR ALUMNO

bool ConfirmarEliminado(char *alumnoAux){
    char op[20];
    bool devuelve;
    system("cls");
    cout<<setw(25)<<left<<" "<<" ============================================================================"<<endl;
    cout<<setw(25)<<left<<" "<<"||¿DESEA ELIMINAR AL ALUMNO: "<<alumnoAux<<endl;
    cout<<setw(25)<<left<<" "<<"||            1. SI                                                         ||"<<endl;
    cout<<setw(25)<<left<<" "<<"||            2. NO                                                         ||"<<endl;
    cout<<setw(25)<<left<<" "<<"||opcion: ";
    cin.getline(op, 20);
    cout<<setw(25)<<left<<" "<<" ============================================================================"<<endl;
     bool c=validarentero(op);
     while(c==false)
     {

            cout<<setw(25)<<left<<" "<<"||                            OPCION INVALIDA                               ||"<<endl;
            cout<<setw(25)<<left<<" "<<" ============================================================================"<<endl;
            cout<<setw(25)<<left<<" "<<"|| opcion: ";
            cin.getline(op, 50);
            cout<<setw(25)<<left<<" "<<" ============================================================================"<<endl;
            c=validarentero(op);
    }
    int op2=atoi(op);
    switch(op2)
    {
    case 1:
        {
            devuelve=true;
        }break;
    case 2:
        {
            devuelve=false;
        }break;
    default:
        {
            cout<<setw(40)<<left<<" "<<" =================================="<<endl;
            cout<<setw(40)<<left<<" "<<"||        INGRESO INVALIDO        ||"<<endl;
            cout<<setw(40)<<left<<" "<<" =================================="<<endl;
            cin.ignore();
        }break;
    }
    return devuelve;
}

void EliminarDetAlumno(int legajoint){
    tAlumno ELIMINAR;
    FILE *p;
    p=fopen(ALUMNO, "rb+");
    if(p!=NULL)
    {
        while(fread(&ELIMINAR,sizeof(ELIMINAR),1,p)==1)
        {
            if(legajoint==ELIMINAR.legajo)
            {
                ELIMINAR.eliminado=true;
                fseek(p, ftell(p)-sizeof ELIMINAR, 0);
                fwrite(&ELIMINAR, sizeof ELIMINAR,1,p);
                fclose(p);
            }
        }
        fclose(p);
        system("cls");
            cout<<setw(40)<<left<<" "<<" ======================================================"<<endl;
            cout<<setw(40)<<left<<" "<<"||        EL ALUMNO FUE ELIMINADO CON EXITO           ||"<<endl;
            cout<<setw(40)<<left<<" "<<" ======================================================"<<endl;
        cin.ignore();
    }
}

void EliminarDealumymat(int legajoint){
    alumymat ELIMINAR;
    FILE *p;
    p=fopen(ALUMATE, "rb+");
    if(p!=NULL)
    {
        while(fread(&ELIMINAR,sizeof(ELIMINAR),1,p)==1)
        {
            if(legajoint==ELIMINAR.LEGAJO)
            {
                ELIMINAR.ELIMINADO=true;
                fseek(p, ftell(p)-sizeof ELIMINAR, 0);
                fwrite(&ELIMINAR, sizeof ELIMINAR,1,p);
                fclose(p);
            }
        }
        fclose(p);
        system("cls");
            cout<<setw(40)<<left<<" "<<" ======================================================"<<endl;
            cout<<setw(40)<<left<<" "<<"||        EL ALUMNO FUE ELIMINADO CON EXITO           ||"<<endl;
            cout<<setw(40)<<left<<" "<<" ======================================================"<<endl;
        cin.ignore();
    }
}

void EliminarAlumno(){
    char legajochar[50];
    bool v, a;
    cout<<setw(40)<<left<<" "<<" =============================================="<<endl;
    cout<<setw(40)<<left<<" "<<"||              ELIMINAR ALUMNO               ||"<<endl;
    cout<<setw(40)<<left<<" "<<" =============================================="<<endl;
    cout<<setw(40)<<left<<" "<<"||Ingrese el legajo del alumno a eliminar:    ||"<<endl;
    cout<<setw(40)<<left<<" "<<"|| ";
    cin.getline(legajochar, 50);
    v=validarentero(legajochar);
    int legajoint=atoi(legajochar);
    char alumnoAux[50];
    a=ValidarAlumno(legajoint, alumnoAux);
    while(!v || !a)
    {
            cout<<setw(40)<<left<<" "<<" ----------------------------------------------"<<endl;
            cout<<setw(40)<<left<<" "<<"||INGRESO INVALIDO O EL ALUMNO NO ESTA CARGADO||"<<endl;
            cout<<setw(40)<<left<<" "<<" ----------------------------------------------"<<endl;
            cout<<setw(40)<<left<<" "<<"||Ingrese el legajo del alumno a eliminar:    ||"<<endl;
            cout<<setw(40)<<left<<" "<<"|| ";
            cin.getline(legajochar, 50);
            cout<<setw(40)<<left<<" "<<" =============================================="<<endl;
            v=validarentero(legajochar);
            legajoint=atoi(legajochar);
            a=ValidarAlumno(legajoint, alumnoAux);
    }
    if(ConfirmarEliminado(alumnoAux))
    {
        EliminarDetAlumno(legajoint);
        EliminarDealumymat(legajoint);
    }
    else
    {
        cout<<"EL ALUMNO:  "<<alumnoAux<<" NO PUDO SER ELIMINADO"<<endl;
        cin.ignore();
    }
}

            ///LISTAR ALUMNOS ELIMINADOS

void MostrarAlumnosEliminados(tAlumno alu){
    cout<<setw(30)<<left<<" "<<setw(8)<<left<<"|"<<setw(8)<<left<<alu.legajo<<"|"<<setw(24)<<left<<alu.nombre<<"|";
    ponerCeroAdelante(alu.dia_nac);
    cout<<"/";
    ponerCeroAdelante(alu.mes_nac);
    cout<<"/"<<setw(13)<<left<<alu.anio_nac<<"|"<<alu.eliminado<<endl;
    cout<<setw(30)<<left<<" "<<"-------------------------------------------------------------"<<endl;
}

void AlumnosEliminados(){
    tAlumno alu;
    FILE *p;
    p=fopen(ALUMNO, "rb");
    if(p!=NULL)
    {
        cout<<setw(30)<<left<<" "<<"-------------------------------------------------------------"<<endl;
        cout<<setw(30)<<left<<" "<<setw(20)<<left<<"|"<<setw(41)<<left<<"LISTADO DE ALUMNOS"<<"|"<<endl;
        cout<<setw(30)<<left<<" "<<"-------------------------------------------------------------"<<endl;
        cout<<setw(30)<<left<<" "<<setw(5)<<left<<"|"<<setw(11)<<left<<"N LEGAJO"<<setw(10)<<left<<"|"<<setw(15)<<left<<"NOMBRE"<<"|"<<setw(15)<<left<<"FECHA DE NACIMIENTO"<<"|"<<endl;
        cout<<setw(30)<<left<<" "<<"-------------------------------------------------------------"<<endl;
        while(fread(&alu,sizeof(tAlumno),1,p))
        {
            if(alu.eliminado==true)
            {
                MostrarAlumnosEliminados(alu);
            }
        }
        cin.ignore();
        fclose(p);
    }
}

#endif // FUNCIONES2_H_INCLUDED
