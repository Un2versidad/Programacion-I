/* 
							PROBLEMA #3
Se requiere un programa que permita el cálculo de tablas de multiplicar en 
base a un número entero dado por el usuario. 
Por ejemplo: si se recibe el número 3, debe imprimir:

	3 X 0 = 0
	3 X 1 = 3
	• • • •
	3 X 9 = 27
	3 X 10 = 30
	
DATOS: Número correspondiente a la tabla que se desea calcular.
SALIDA: Tabla del número recibido, desde 0 hasta 10
*/

#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Spanish");
	int num, result, i;
	char opc;
	
	do
	{
		cout << "Digite el Número de Tabla de Multiplicar que Desea Conocer: ";
		cin >> num;
		system("cls");
		cout << setw(60) << setfill('=') << "" << endl;
   		cout << setfill(' ') << setw(4) << " " << "Tabla de Multiplicar Seleccionada por el Usuario: " << num << setw(20) << " " << endl;
		cout << setw(60) << setfill('=') << "" << endl;
		for (i = 0; i <= 10; i++)
		{
			result = num * i;
			cout << "\n| " << num << " x " << i << " = " << result << " |" << endl;
		}
		cout << "\n";

		cout << "\nDesea saber la tabla de algun otro número? (s/n): ";
		cin >> opc;	
		system("cls");
	} while (opc == 's' || opc == 'S');
	
	cout << "Gracias por utilizar el sistema de cálculo de tablas de multiplicar...\n\n";
	system("pause");
    return 0;
}
