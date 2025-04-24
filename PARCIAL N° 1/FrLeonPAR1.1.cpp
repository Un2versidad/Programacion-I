/*
	Un alumno de la ESCUELA ABC, que cursa matemáticas de 6º grado. El estudiante tiene 7 notas
	y se desea saber su nota final y si pasó o no la materia. Las notas son de 0 a 5, por lo que, la nota
	mínima para pasar la materia es 3.
	DATOS: Nombre, apellido, cédula y cada una de las 7 notas.
	SALIDA: Borre la pantalla y muestre: Cédula, promedio y el mensaje solicitado
*/

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Spanish");
	
    string ced, nom, ape;
    float nt1, nt2, nt3, nt4, nt5, nt6, nt7, Nfinal;

	cout << "Digite su Nombre y Apellido (Ejemplo del Formato: Juan Santos): ";
	cin >> nom  >> ape;
	
	cout << "Digite su Cédula: ";
    cin >> ced;
    
    cout << "\t\t\tDigite la Nota del Ejercicio 1: ";
    cin >> nt1;
    cout << "\t\t\tDigite la Nota del Ejercicio 2: ";
    cin >> nt2;
    cout << "\t\t\tDigite la Nota del Ejercicio 3: ";
    cin >> nt3;
    cout << "\t\t\tDigite la Nota del Ejercicio 4: ";
    cin >> nt4;
    cout << "\t\t\tDigite la Nota del Ejercicio 5: ";
    cin >> nt5;
    cout << "\t\t\tDigite la Nota del Ejercicio 6: ";
    cin >> nt6;
    cout << "\t\t\tDigite la Nota del Ejercicio 7: ";
    cin >> nt7;
    
    Nfinal = (nt1 + nt2 + nt3 + nt4 + nt5 + nt6 + nt7) / 7;
    
    system("cls");

    cout << "\n\n";
    cout << "\t\t\t\t" << setw(43) << setfill('=') << "" << endl;
    cout << "\t\t\t\t" << setfill(' ') << setw(16) << " " << "ESCUELA ABC" << setw(20) << " " << endl;
    cout << "\t\t\t\t" << setw(43) << setfill('=') << "" << endl;
    cout << "\n\n";
    cout << "\t\t\t\t" << setfill(' ') << setw(30) << "Estudiante con la Cédula: " << ced << endl;
    cout << "\t\t\t\t" << setw(30) << "Su Nota Final es de: " << fixed << setprecision(2) << Nfinal << endl;
    cout << "\n\n";
    
    if (Nfinal >= 3)
        cout << "\t\t\t\t" << setw(43) << "Felicidades!, Usted Aprobo la Materia." << endl;
    else
        cout << "\t\t\t\t" << setw(43) << "Lamentablemente, Usted Reprobo la Materia." << endl;

    cout << "\t\t\t\t" << setw(43) << setfill('=') << "" << endl;
    cout << endl;

    system("pause");
    return 0;
}