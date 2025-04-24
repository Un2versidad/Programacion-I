/*
	Determinar la edad de una persona en base al año de nacimiento y el año actual, además, deberá
	indicar si es menor o es adulta.
	DATOS: Año actual, nombre, apellido, año de nacimiento.
	SALIDA: Borre la pantalla y muestre: Nombre, apellido, edad y un mensaje que diga si es menor
	o adulto.
*/

#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Spanish");
    
    string nom, ape;
    int anioActual, anioNacimiento, edad;

	cout << "Digite su Nombre y Apellido (Ejemplo del Formato: Juan Santos): ";
	cin >> nom  >> ape;
	
    cout << "Ingrese el año actual: ";
    cin >> anioActual;
    
    cout << "Ingrese el año de nacimiento: ";
    cin >> anioNacimiento;

    edad = anioActual - anioNacimiento;

    system("cls");
    cout << "\n\n";
    cout << "------------------------------------------------\n";
    cout << "\t\t Nombre: " << nom << " " << ape << "\n";
    cout << "\n\t\t Edad: " << edad << " años"  << "\n";
    cout << "------------------------------------------------\n";
   
    if (edad >= 18)
        cout << "\t\t Es un Adulto.\n";
	else
        cout << "\t\t Es Menor.\n";
    
    cout << "------------------------------------------------\n" << endl;
    system("pause");
    return 0;
}