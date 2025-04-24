/* 

						Do While

Un Comerciante de la localidad desea dar bonos a sus empleados,
en base a sueldo y años de servicios.
DATOS: Cédula, nombre, apellido, sueldo, años de servicio
SALIDA: Monto del bono.
-----------------------------------------------------------
-   Años de servicio		Monto del bono (% del sueldo) -
-----------------------------------------------------------
-   Hasta 5 años							75%			  -
-   Más de 5 años, hasta 12					125%		  -
-   Más de 12, hasta 15						175%		  -
-   Más de 15								200%	      -
-----------------------------------------------------------

Recuerde que después de generar el bono de un empleado,
deberá limpiar la pantalla para recibir los datos del siguiente. 

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

    cout << "Bienvenido al sistema de cálculo de bono para empleados\n\n";
	do
	{
        nEmpleado++;

        cout << setw(50) << setfill('+') << "" << endl;
        cout << setfill(' ') << setw(18) << " " << "Empleado N°" << nEmpleado << setw(20) << " " << endl;
        cout << setw(50) << setfill('+') << "" << endl;

        cout << "\nIngrese la cédula del empleado: ";
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
            cout << "Por favor ingrese un valor válido para el sueldo: ";
        }

        cout << "\nIngrese los años de servicio del empleado: ";
        
        while (!(cin >> aServicio) || aServicio < 0) 
		{
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Por favor ingrese un número entero válido para los años de servicio: ";
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
        
        cout << "\nResumen del empleado Nº" << nEmpleado << ":\n";
        cout << setw(37) << setfill('=') << "" << endl;
        cout << "Años de servicio: " << aServicio << endl;
        cout << "Sueldo: $" << fixed << setprecision(2) << sld << endl;
        cout << "Monto del bono: $" << fixed << setprecision(2) << mBono << endl;
        cout << "Total del sueldo: $" << fixed << setprecision(2) << total << endl;
        cout << setw(37) << setfill('=') << "" << endl;
        
        cout << "\n\n¿Desea ingresar otro empleado? (s/n): ";
        cin >> opc;
        cout << "\n\n";
        system("cls");
        
	} while (opc == 's' || opc == 'S');
	
    cout << "Gracias por utilizar el sistema de cálculo de bonos...\n\n";
    system("pause");
    return 0;
}
