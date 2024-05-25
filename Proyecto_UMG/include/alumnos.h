//Creando por Andy Garcia 9959-23-1494

//Encabezados de proteccion
#ifndef ALUMNOS_H
#define ALUMNOS_H

//Incluyendo librerias a utilizar
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include"usuarios.h"

using namespace std;

//Estructura de proce alumnos
    struct Procealumnos {

char dpi[20]; // Almacena el n�mero de DPI (Documento Personal de Identificaci�n) del usuario
char certiestudios[50]; // Almacena la informaci�n sobre la certificaci�n de estudios del usuario
char fotoestatica[10]; // Almacena informaci�n sobre la foto est�tica del usuario
char titulo[20]; // Almacena informaci�n sobre el t�tulo del usuario
char fotocedula[100]; // Almacena informaci�n sobre la foto de la c�dula del usuario
char copiadpi[50]; // Almacena informaci�n sobre la copia del DPI del usuario al 200%
char solvente[20]; // Almacena informaci�n sobre el estado de solvencia del usuario

};

//Creacion de la clase alumnos
class alumnos
{
    //Atributos privados de la clase alumnos
    private:
    string id, nombre, telefono, DPI, direccion, Genero, nacionalidad, civil, fechanaci, anoingre,dpi , certiestudios, fotoestatica, titulo, fotocedula, copiadpi;


    //Atributos publicos de la clase alumnos
    public:
        //Creando los contructores
        string solvente;
        alumnos() {}
        alumnos(string dpi, string certiestudios, string fotoestatica, string titulo, string fotocedula, string copiadpi, string id, string nombre, string telefono, string DPI, string direccion, string Genero, string nacionalidad, string civil, string fechanaci, string anoingre, string solvente);

        //Estableciendo la id
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

        //Estableciendo el a�o de ingreso
        string setdpi(string dpi);
        //Obteniendo el dpi
        string getdpi();

         //Estableciendo el a�o de ingreso
        string setcertiestudios(string certiestudios);
        //Obteniendo el certificado de estudios
        string getcertiestudios();

         //Estableciendo el a�o de ingreso
        string setfotoestatica(string fotoestatica);
        //Obteniendo la foto estatica
        string getcfotoestatica();

         //Estableciendo el a�o de ingreso
        string settitulo(string titulo);
        //Obteniendo el titulo
        string gettitulo();

         //Estableciendo el a�o de ingreso
        string setfotocedula(string fotocedula);
        //Obteniendo la foto cedula
        string gettfotocedula();

         //Estableciendo el a�o de ingreso
        string setcopiadpi(string copiadpi);
        //Obteniendo la copia de dpi
        string getcopiadpi();



    //Funciones
    void menu(); //Funcion menu para poder mostar el menu de alumnos
    void insertar(); //Funcion para insertar un nuevo alumno
    void desplegar(); //Funcion para poder desplegar los alumnos registrados
    void modificar(); //Funcion para modificar un alumno registrado
    void buscar(); //Funcion para poder buscar un alumno por medio de la id
    void borrar(); //Funcion para poder borrar algun alumno registrado


    //Estructura del alumno
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
};

#endif // ALUMNOS_H
