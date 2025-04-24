/*
	Un banco paga, a sus clientes, 1.6% de interés mensual sobre inversiones de hasta B/.500 y 2.3%
	en el resto. Un cliente desea saber cuánto recibirá por su inversión, si retira su dinero al mes de
	haberlo depositado.
	DATOS: Nombre, apellido y monto de la inversión.
	SALIDA: Monto del interés y total a recibir.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");
    
    string nom, ape;
    float inv, intr, total;

    cout << "Digite su Nombre y Apellido (Ejemplo del Formato: Juan Santos): ";
    cin >> nom >> ape;
    
    cout << "Digite el Monto de la inversión: ";
    cin >> inv;

    if (inv <= 500)
        intr = inv * 0.016;
	else 
        intr = inv * 0.023;

    total = inv + intr;

    system("cls"); 
    cout << "\n\n";
    cout << "\t\t\t\t" << setw(43) << setfill('=') << "" << endl;
    cout << "\t\t\t\t\t" << "Monto del Interes: " << fixed << setprecision(2) << intr << "$" << endl;
    cout << "\t\t\t\t\t" << "Total a Recibir: " << fixed << setprecision(2) << total << "$" << endl;
    cout << "\t\t\t\t" << setw(43) << setfill('=') << "" << endl;
    cout << "\n\n";
    
    system("pause");
    return 0;
}