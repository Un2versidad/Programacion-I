/* 
							PROBLEMA #1

Haga un programa para procesar los datos de los alumnos de la ESCUELA ABC, que cursa 
geografía de 6º grado. Cada estudiante tiene 6 notas, se desea saber su promedio final y si pasó 
o no la materia. Las notas son de 0 a 5, por lo que, la nota mínima para pasar la materia es 3.0 
(con 1 solo decimal).

DATOS: Nombre, apellido, cédula y cada una de las 6 notas.
SALIDA: Borrar pantalla y mostrar cédula, promedio y el mensaje solicitado.

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
	
	float prom = 0, nt = 0;
	string nom, ape, cd, fecha = ctime(&t);
	int i, cEst = 0;
	char opc;
	do
	{
		cEst++;
		cout << setw(43) << setfill('=') << "" << endl;
   		cout << setfill(' ') << setw(13) << " " << "Estudiante N°" << cEst << setw(20) << " " << endl;
		cout << setw(43) << setfill('=') << "" << endl;
		
		cout << "\nDigite su Cédula: ";
		cin >> cd;
		
		cout << "\nDigite su Nombre: ";
		cin >> nom;
		
		cout << "\nDigite su Apellido: ";
		cin >> ape;

		for (i = 1; i <= 6; i++)
		{	
			cout << "\nDigite su Nota N°" << i << ": ";
			cin >> nt;
			
			while (!(nt >= 0 && nt <= 5))
			{
				i - 1;
				cout << "\nVuelva a digitar su nota N°" << i;
				cout << "\nDigite su Nota N°" << i << ": ";
				cin >> nt;
			}
							
			prom += nt;
		}
		
		prom = prom / 6;
		
		system("cls");
		cout << "\n\n";
    	cout << "\t\t\t\t" << setw(43) << setfill('=') << "" << endl;
   		cout << "\t\t\t\t" << setfill(' ') << setw(9) << " " << "Escuela ABC | Estudiante N°" << cEst << setw(20) << " " << endl;
    	cout << "\t\t\t\t" << setw(43) << setfill('=') << "" << endl;
    	cout << "\n\n";
    	cout << "\t\t\t\t" << setfill(' ') << setw(33) << "Estudiante con la Cédula: " << cd << endl;
    	cout << "\t\t\t\t" << setw(28) << "Su Nota Final es de: " << fixed << setprecision(1) << prom << endl;
    	cout << "\n\t\t\t" << setfill(' ') << setw(22) << "  Fecha: " << fecha << setw(20) << " " << endl;
    	cout << "\n";

    	if (prom >= 3)
    	    cout << "\t\t\t\t" << setw(41) << "Felicidades!, Usted Aprobo la Materia." << endl;
    	else
    	    cout << "\t\t\t\t" << setw(41) << "Lamentablemente, Usted Reprobo la Materia." << endl;
		
    	cout << "\t\t\t\t" << setw(43) << setfill('=') << "" << endl;
    	cout << endl;
    	
    	system("pause");
    	system("cls");
    	prom = 0;
    	
    	cout << "Desea Calcular el Promedio de Otro Estudiante? (s/n): ";
    	cin >> opc;
    	system("cls");
	} while (opc == 's' || opc == 'S');
	
	system("pause");
    return 0;
}
