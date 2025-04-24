/*
										PROBLEMA #5

	Haga un programa que permita realizar el cálculo de la edad de las personas y determinar si son
	menores o adultos. 
	
	DATOS: Año actual, nombre, apellido, año de nacimiento.
	SALIDA: Borre pantalla, muestre nombre, apellido, edad y un mensaje que diga si es menor o 
	adulto.
*/

#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <iomanip>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Spanish");
    int aAct, aNac, edad, cUsr;
    string nom, ape;
    char opc;
    
    do
	{
    	cUsr++;
		cout << setw(43) << setfill('=') << "" << endl;
   		cout << setfill(' ') << setw(13) << " " << "Usuario N°" << cUsr << setw(20) << " " << endl;
		cout << setw(43) << setfill('=') << "" << endl;
		cout << "Digite su Nombre: \n";
		cin >> nom;
	
		cout << "\nDigite su Apellido: \n";
		cin >> ape;
	
   	 	cout << "\nDigite el año actual: \n";
    	cin >> aAct;
    
    	cout << "\nDigite su año de nacimiento: \n";
    	cin >> aNac;

    	edad = aAct - aNac;

   		system("cls");
    	cout << setw(43) << setfill('=') << "" << endl;
   		cout << setfill(' ') << setw(13) << " " << "Usuario N°" << cUsr << setw(20) << " " << endl;
    	cout << setw(43) << setfill('=') << "" << endl;
    	cout << "\n";
    	cout << setfill(' ') << setw(18) << "Nombre: " << nom << " " << ape << endl;
    	cout << setw(18) << "Edad: " << edad << " años" << endl;
    	cout << "\n";
        cout << setw(43) << setfill('=') << "" << endl;

    	if (edad >= 18)
       		cout << setfill(' ') << setw(25) << "Es un Adulto.\n";
		else
        	cout << setfill(' ') << setw(25) << "Es Menor.\n";
    
        cout << setw(43) << setfill('=') << "" << endl;
    	cout << endl;

    	cout << "\nDesea saber la edad de algun otro persona? (s/n)" << endl;
		cin >> opc;
		system("cls");
	} while (opc == 's' || opc == 'S');
	
    cout << "Gracias por utilizar el sistema de cálculo de edad...\n\n";
    system("pause");
    return 0;
}
