/* 

						Do While

Un Comerciante de la localidad desea dar bonos a sus empleados,
en base a sueldo y a�os de servicios.
DATOS: C�dula, nombre, apellido, sueldo, a�os de servicio
SALIDA: Monto del bono.
-----------------------------------------------------------
-   A�os de servicio		Monto del bono (% del sueldo) -
-----------------------------------------------------------
-   Hasta 5 a�os							75%			  -
-   M�s de 5 a�os, hasta 12					125%		  -
-   M�s de 12, hasta 15						175%		  -
-   M�s de 15								200%	      -
-----------------------------------------------------------

Recuerde que despu�s de generar el bono de un empleado,
deber� limpiar la pantalla para recibir los datos del siguiente. 

*/

#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main() {
    setlocale(LC_ALL, "spanish");

    string ced, nom, ape;
    double sld, total, mBono = 0;
    int aServicio;
    char opc;
    int nEmpleado = 0;

    cout << "Bienvenido al sistema de c�lculo de bono para empleados\n\n";
	do
	{
        nEmpleado++;

        cout << setw(50) << setfill('+') << "" << endl;
        cout << setfill(' ') << setw(18) << " " << "Empleado N�" << nEmpleado << setw(20) << " " << endl;
        cout << setw(50) << setfill('+') << "" << endl;

        cout << "\nIngrese la c�dula del empleado: ";
        cin >> ced;

        cout << "\nIngrese el nombre del empleado: ";
        cin >> nom;

        cout << "\nIngrese el apellido del empleado: ";
        cin >> ape;

        cout << "\nIngrese el sueldo del empleado: ";
        
        while (!(cin >> sld) || sld < 0)
		{
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Por favor ingrese un valor v�lido para el sueldo: ";
        }

        cout << "\nIngrese los a�os de servicio del empleado: ";
        
        while (!(cin >> aServicio) || aServicio < 0) 
		{
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Por favor ingrese un n�mero entero v�lido para los a�os de servicio: ";
        }

        if (aServicio <= 5) 
            mBono = sld * 0.75;
        else if (aServicio <= 12)
            mBono = sld * 1.25;
        else if (aServicio <= 15)
            mBono = sld * 1.75;
        else
            mBono = sld * 2.00;
        
        total = sld + mBono;
        
        system("cls");
        
        cout << "\nResumen del empleado N�" << nEmpleado << ":\n";
        cout << setw(37) << setfill('=') << "" << endl;
        cout << "A�os de servicio: " << aServicio << endl;
        cout << "Sueldo: $" << fixed << setprecision(2) << sld << endl;
        cout << "Monto del bono: $" << fixed << setprecision(2) << mBono << endl;
        cout << "Total del sueldo: $" << fixed << setprecision(2) << total << endl;
        cout << setw(37) << setfill('=') << "" << endl;
        
        cout << "\n\n�Desea ingresar otro empleado? (s/n): ";
        cin >> opc;
        cout << "\n\n";
        system("cls");
        
	} while (opc == 's' || opc == 'S');
	
    cout << "Gracias por utilizar el sistema de c�lculo de bonos...\n\n";
    system("pause");
    return 0;
}
