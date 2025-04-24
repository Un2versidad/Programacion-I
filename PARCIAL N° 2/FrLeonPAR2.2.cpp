/* 
							PROBLEMA #2
							
	Un comerciante da descuento, según la siguiente tabla:
	---------------------------------------------------------------------
	- Monto  de la compra -                    Porcentaje del descuento -
	- Hasta 125$  ...................................  15%              -
	- Mas de 125$, hasta 200$ ........................  25%             -
	- Mas de 200$, hasta 325$ .......................... 35%            -
	- Mas de 325$ .....................................  45%            -
	---------------------------------------------------------------------
	
	Los clientes desean saber cuánto deberán pagar por sus compras.
	
	DATOS: Nombre, apellido, monto de la compra.
	SALIDA: Monto del descuento y total a pagar
*/

#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	time_t t = time(0);
	setlocale(LC_ALL, "Spanish");
	string nom, ape, fecha = ctime(&t);
	float mComp, mDesc, tPagar;
	int cClient = 0;
	char opc;

	do
	{
		cClient++;
		cout << setw(43) << setfill('=') << "" << endl;
   		cout << setfill(' ') << setw(13) << " " << "\tClient N°" << cClient << setw(20) << " " << endl;
		cout << setw(43) << setfill('=') << "" << endl;
		
		cout << "\nDigite su Nombre: ";
		cin >> nom;
		
		cout << "\nDigite su Apellido: ";
		cin >> ape;
		
		cout << "\nDigite el Monto de su Compra: ";
		cin >> mComp;
		
		while (mComp < 0)
		{
			cout << "\nVuelva a Digitar el Monto de su Compra!";
			cout << "\nDigite el Monto de su Compra: ";
			cin >> mComp;
		}
		
		if (mComp <= 125)
			mDesc = mComp * 0.15;
		else if (mComp <= 200)
			mDesc = mComp * 0.25;
		else if (mComp <= 325)
			mDesc = mComp * 0.35;
		else
			mDesc = mComp * 0.45;
			
		tPagar = mComp - mDesc;
		
		system("cls");
    	cout << "\n\n\t\t\t\t" << setw(43) << setfill('=') << "" << endl;
   		cout << "\t\t\t\t" << setfill(' ') << setw(13) << " " << "\tClient N°" << cClient << setw(20) << " " << endl;
    	cout << "\t\t\t\t" << setw(43) << setfill('=') << "" << endl;
    	cout << "\n\n\t\t\t\t" << setw(15) << "\t Monto del Descuento: " << fixed << setprecision(2) << mDesc << "$" << endl;
    	cout << "\t\t\t\t" << setw(15) << "\t Total a Pagar: " << fixed << setprecision(2) << tPagar  << "$"<< endl;
    	cout << "\n\t\t\t" << setfill(' ') << setw(21) << "  Fecha: " << fecha << setw(20) << " " << endl;
    	cout << "\n\t\t\t\t" << setw(43) << setfill('=') << "" << endl;
    	cout << endl;
    	
    	system("pause");
    	system("cls");
    	
    	cout << "Desea Continuar con el Siguiente Cliente? (s/n): ";
    	cin >> opc;
    	system("cls");
	} while (opc == 's' || opc == 'S');
	
	cout << "Gracias por utilizar el sistema de cálculo de descuentos...\n\n";
	system("pause");
    return 0;
}
