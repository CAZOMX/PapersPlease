#include "Pasaporte.h"
#include <string>
#include <iostream> 

using namespace std;

Pasaporte::Pasaporte(string Nombre, string Apellido, string Edad) {
	this->Nombre = Nombre;
	this->Apellido = Apellido;
	this->Edad = Edad;
}

void Pasaporte::Mostrar() {
	cout << "\n\n----PASAPORTE-----\n Nombre: " << Nombre << "\nApellido: " << Apellido << "\nEdad: " << Edad << endl;

}

bool validar() {
    int opcion;
    bool repetir = true;

    do {
        system("cls");

        // Texto del menú que se verá cada vez
        cout << "\nIngresa el apartado en cual encuentras discrepancias o si no encuentras discrepancias y decides dejarlo pasar\n" << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "4. Opcion 4" << endl;
        cout << "0. SALIR" << endl;

        cout << "\nIngrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            // Lista de instrucciones de la opción 1                

            system("pause>nul"); // Pausa
            break;

        case 2:
            // Lista de instrucciones de la opción 2                

            system("pause>nul"); // Pausa
            break;

        case 3:
            // Lista de instrucciones de la opción 3                

            system("pause>nul"); // Pausa            
            break;

        case 4:
            // Lista de instrucciones de la opción 4                

            system("pause>nul"); // Pausa                
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);

    return 0;
}
