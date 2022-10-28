#include "INE.h"
#include <string>
#include <iostream> 

using namespace std;

INE::INE(string Nombre, string Apellido, string Edad) {
	this->Nombre = Nombre;
	this->Apellido = Apellido;
	this->Edad = Edad;
}

void INE::Mostrar() {
	cout << "\nHola soy carlos vengo a pasar el  fin de semana para nada tengo documentaci[on falsa ni vengo a trabajar aqui tienes mis documentos:\n";
	cout << "\n-------INE--------\n Nombre: " << Nombre << "\nApellido: " << Apellido << "\nEdad: " << Edad << endl;

}