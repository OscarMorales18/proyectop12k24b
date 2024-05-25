//Creado por Jose Gallardo 9959-23-106

//Incluyendo Librerias
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <unistd.h>

//Incluyendo encabezados
#include "Bitacora.h"
#include "alumnos.h"
#include "maestros.h"
#include "Procesos.h"
#include "usuarios.h"
#include "Login.h"
#include "Portada.h"



using namespace std;

//Funciones
void menuGeneral();
void catalogos();
void reportes();
void procesos();
void ayuda();
void seguridad();

//Variable string
string codigoPrograma="1";



int main() {
    cout << "                                              PROYECTO UMG " << endl;
    Portada::dibujarPortada("Portada.txt.txt");
    system("Pause");

    Login login; // Creaci�n de un objeto Login

// Validaci�n del inicio de sesi�n
if (login.validacion()) {
    menuGeneral(); // Si la validaci�n es exitosa, muestra el men� principal
} else {
    cout << "Intentelo nuevamente..." << endl; // Si la validaci�n falla, muestra un mensaje de error
}

return 0; // Finaliza el programa
}



//Funcion menu general
void menuGeneral()
{
    //Variable int
    int choice;

    do
    {
        //Limpiando pantalla
        system("cls");
        //Dise�o del sistema
        cout << "\t\t\t-------------------------------" << endl;
        cout << "\t\t\t|   SISTEMA DE GESTION UMG     |"<< endl;
        cout << "\t\t\t-------------------------------" << endl;
        cout << "\t\t\t 1. Catalogos" << endl;
        cout << "\t\t\t 2. Procesos" << endl;
        cout << "\t\t\t 3. Reportes" << endl;
        cout << "\t\t\t 4. Seguridad" << endl;
        cout << "\t\t\t 5. Ayuda" << endl;
        cout << "\t\t\t 6. Salir del Sistema" << endl;
        cout << "\t\t\t-------------------------------" << endl;
        cout << "\t\t\t|Opcion a escoger:[1/2/3/4/5/6]  |" << endl;
        cout << "\t\t\t-------------------------------" << endl;
        cout << "\t\t\tIngresa tu Opcion: ";
        cin >> choice;

        //Opciones
        switch (choice)
        {
        //Opcion 1
        case 1:
            catalogos();
            break;

        //Opcion 1
        case 2:
            {
               Procesos proceso;
               proceso.menuGenerar();
               break;
            }
        //Opcion 3
        case 3:
            reportes();
            break;
        //Opcion 4
        case 4:
            {
                Bitacora bitacora;
                bitacora.mostrarBitacora();
                break;
            }
        //Opcion 5
        case 5:
            //Funcion ayuda
            ayuda();
            break;

        //Opcion 6
        case 6:
            {
            //Implementacion de la bitacora
            string usuarioActual = Login::getUsuarioActual();

            // Crear una instancia de la clase Bitacora para registrar el ingreso
            Bitacora bitacora;

            // Registro del ingreso en la bit�cora
            bitacora.ingresoBitacora(usuarioActual, "2600", "LGO");
            exit(0);
            }

        default:
            cout << "\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
            cin.ignore();
            cin.get();
        }
    //Si es 6 sale del sistema
    } while (choice != 6);
}

//Funcion catalogos
void catalogos()
{
    //Variable int
    int choice;

    do
    {
        //Limpiando pantalla
        system("cls");
        //Dise�o del sistema de gestion UMG
        cout << "\t\t\t--------------------------------------------" << endl;
        cout << "\t\t\t|   SISTEMA DE GESTION UMG - CATALOGOS      |" << endl;
        cout << "\t\t\t--------------------------------------------" << endl;
        cout << "\t\t\t 1. Alumnos" << endl;
        cout << "\t\t\t 2. Maestros" << endl;
        cout << "\t\t\t 3. Usuarios del sistema" << endl;
        cout << "\t\t\t 4. Carreras" << endl;
        cout << "\t\t\t 5. Facultades" << endl;
        cout << "\t\t\t 6. Cursos" << endl;
        cout << "\t\t\t 7. Jornadas" << endl;
        cout << "\t\t\t 8. Aulas" << endl;
        cout << "\t\t\t 9. Secciones" << endl;
        cout << "\t\t\t 10. Sedes" << endl;
        cout << "\t\t\t 11. Horarios" << endl;
        cout << "\t\t\t 12. Retornar menu anterior" << endl;
        cout << "\t\t\t --------------------------------------------" << endl;
        cout << "\t\t\t | Opcion a escoger:[1-12]|" << endl;
        cout << "\t\t\t --------------------------------------------" << endl;
        cout << "\t\t\tIngresa tu Opcion: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            //Lammada al alumno menu
            alumnos alumno;
            alumno.menu();
        }
            break;
        case 2:
        {
            //Lammada al maestro menu
            maestros maestro;
            maestro.menu();
        }
            break;
        case 3:
        {
            //Lammada al usuario menu
            usuarios usuario;
            usuario.menu();
            break;
        }
        case 4:
            // Implementaci�n para Carreras
            break;
        case 5:
            // Implementaci�n para Facultades
            break;
        case 6:
            // Implementaci�n para Cursos
            break;
        case 7:
            // Implementaci�n para Jornadas
            break;
        case 8:
            // Implementaci�n para Aulas
            break;
        case 9:
            // Implementaci�n para Secciones
            break;
        case 10:
            // Implementaci�n para Sedes
            break;
        case 11:
            // Implementaci�n para Horarios
            break;
        case 12:
            //Funcion menu general
            menuGeneral();
            break;
        default:
            cout << "\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
            cin.ignore();
            cin.get();
        }
    //Si es 12 retorna al menu anterior
    } while (choice != 12);
}

void procesos()
{
    //Implementacion de procesos
}

void reportes()
{
    // Implementaci�n de reportes
}

void ayuda()
{
    // Implementaci�n de ayuda
}

void seguridad()
{
    // Implementaci�n de seguridad
                Bitacora bitacora;
                bitacora.mostrarBitacora();
}
