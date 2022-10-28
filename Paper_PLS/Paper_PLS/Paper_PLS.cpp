// Paper_PLS.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <fstream>
#include "INE.h"
#include "Pasaporte.h"

using namespace std; 

ifstream Lec;

string NomJI, ApeJI, EdadJI;
string nom, ape, edad;

void ObtenerINE(ifstream &Lec) {
    system("cls");
    Lec.open("C:/Users/jeffc/Documents/SEMESTRE II/POO/Papers_Please-main/Paper_PLS/INE_Carlos.txt", ios::in);
    bool leido = false;
    while (!Lec.eof() && !leido) {
        Lec >> nom;
        Lec >> ape;
        Lec >> edad;
        leido = true;
    }
    Lec.close();

    if (!leido) {
        system("pause");
    }

}
void ObtenerPAS(ifstream& Lec) {
    Lec.open("C:/Users/jeffc/Documents/SEMESTRE II/POO/Papers_Please-main/Paper_PLS/PAS_Carlos.txt", ios::in);
    bool leido = false;
    while (!Lec.eof() && !leido) {
        Lec >> nom;
        Lec >> ape;
        Lec >> edad;
        leido = true;
    }
    Lec.close();

    if (!leido) {
        system("pause");
    }

}

int main()
{
    cout << "  ____                             ____  _ \n ";
    cout << " |  _ \ __ _ _ __   ___ _ __ ___  |  _ \| | ___  __ _ ___  ___ \n";
    cout << " | |_) / _` | '_ \ / _ \ '__/ __| | |_) | |/ _ \/ _` / __|/ _ \ \n";
    cout << " |_|   \__,_| .__/ \___|_|  |___/ |_|   |_|\___|\__,_|___/\___| \n ";
    cout << "            |_|\n";
    cout << "Bienvenido!\n en este caso tomarás el papel de un agente aduanal la gloria y reputación de arztorzka depende de tu trabajo\n";
    cout << "\nel cuidado de tu familia dependera de las deciciones que tomen en el transcurso de tu turno cuida al pais y recuerda \n!GLORIA A ARZTORZKA! \n";
    cout << "\n------------------------------------------------------------------------------------------\n";
    system("pause");
    ObtenerINE(Lec);
    INE* IJ;
    IJ = new INE(nom, ape, edad);
    IJ->Mostrar();
    delete IJ;
    ObtenerPAS(Lec);
    Pasaporte* PJ;
    PJ = new Pasaporte(nom, ape, edad);
    PJ->Mostrar();
}

