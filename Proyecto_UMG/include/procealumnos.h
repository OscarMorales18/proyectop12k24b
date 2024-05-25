#ifndef PROCEALUMNOS_H
#define PROCEALUMNOS_H

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include"usuarios.h"


using namespace std;

struct Alumno {

    char id[20];          // Almacena la id de los alumnos ingresados
    char nombre[50];      // Almacena el nombre  del alumno ingresado
    char Genero[10];      // Almacena el g�nero del alumno ingresado
    char DPI[20];         // Almacena el DPI del alumno ingresado
    char direccion[100];  // Almacena la direcci�n del alumno ingresado
    char nacionalidad[50];// Almacena la nacionalidad del alumno ingresado
    char telefono[15];    // Almacena el n�mero de tel�fono del alumno ingresado
    char civil[20];       // Almacena el estado civil del alumno ingresado
    char fechanaci[20];   // Almacena la fecha de nacimiento del alumno ingresado
    char anoingre[10];    // Almacena el a�o de ingreso del alumno ingresado
};

class procealumnos
{
    private:
    string id, nombre, telefono, DPI, direccion, Genero, nacionalidad, civil, fechanaci, anoingre, dpi , certiestudios, fotoestatica, titulo, fotocedula, copiadpi;

    public:

        string solvente;
        procealumnos() {}
        procealumnos(string dpi, string certiestudios, string fotoestatica, string titulo, string fotocedula, string copiadpi, string id, string nombre, string telefono, string DPI, string direccion, string Genero, string nacionalidad, string civil, string fechanaci, string anoingre, string solvente);

        string setdpi(string dpi);
        string getdpi();

        string setcertiestudios(string certiestudios);
        string getcertiestudios();

        string setfotoestatica(string fotoestatica);
        string getcfotoestatica();

        string settitulo(string titulo);
        string gettitulo();

        string setfotocedula(string fotocedula);
        string gettfotocedula();

        string setcopiadpi(string copiadpi);
        string getcopiadpi();

        string setid(string id);
        //obteniendo la id
        string getid();


        //Estableciendo el nombre
        string setnombre(string nombre);
        //obteniendo el nombre
        string getnombre();


        //Estableciendo el numero del telefono
        string setTelefono(string telefono);
        //obteniendo el numero del telefono
        string getTelefono();


        //Estableciendo el DPI
        string setDPI(string DPI);
        //Obteniendo el DPI
        string getDPI();


        //Estableciendo la direccion
        string setdireccion(string direccion);
        //Obteniendo la direccion
        string getdireccion();


        //Estableciendo el genero
        string setGenero(string Genero);
        //Obteniendo el genero
        string getGenero();

        //Estableciendo la nacionalidad
        string setnacionalidad(string nacionalidad);
        //Obteniendo la nacionalidad
        string getnacionalidad();


        //Estableciendo el estado civil
        string setcivil(string civil);
        //Obteniendo el estado civil
        string getcivil();


        //Estableciendo la fecha de nacimiento
        string setfechanaci(string fechanaci);
        //Obteniendo la fecha de nacimiento
        string getfechanaci();


        //Estableciendo el a�o de ingreso
        string setanoingre(string anoingre);
        //Obteniendo el a�o de ingreso
        string getanoingre();

        string setsolvente(string solvente);
        //Obteniendo el a�o de ingreso
        string getsolvente();

    void menu();
    void insertar();
    bool validarCarnet();
    void mostrarmenu();


    struct Procealumnos {

    char dpi[20];
    char certiestudios[50];
    char fotoestatica[10];
    char titulo[20];
    char fotocedula[100];
    char copiadpi[50];
    char solvente[20];

};
};

#endif // PROCEALUMNOS_H
