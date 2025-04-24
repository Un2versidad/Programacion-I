/* 

                              PROBLEMA A RESOLVER

Un estudiante de la escuela SABELOTODO, quiere saber si pas� o no la materia de
matem�ticas. Durante el a�o lectivo, han realizado 4 ejercicios, 3 ex�menes y 1 investigaci�n,
todas con el mismo peso porcentual.

Las notas de las evaluaciones son entre 0 (cero y cinco), por lo tanto, la nota de aprobaci�n
es de 3 a 5.

DATOS: C�dula, nombre, apellido las 4 notas de los ejercicios, las 3 notas de los ex�menes
y la nota de la investigaci�n.

SALIDA: 
a) Limpie la pantalla
b) Muestre: C�dula, promedio y un mensaje de si el alumno pas� o no la materia

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
    float nt1, nt2, nt3, nt4, exa1, exa2, exa3, inv, Nfinal;

    cout << "Digite su C�dula: ";
    cin >> ced;
    cout << "Digite su Nombre y Apellido (Ejemplo del Formato: Juan Santos): ";
    cin >> nom >> ape;
    
    cout << "\t\t\tDigite la Nota del Ejercicio 1: ";
    cin >> nt1;
    cout << "\t\t\tDigite la Nota del Ejercicio 2: ";
    cin >> nt2;
    cout << "\t\t\tDigite la Nota del Ejercicio 3: ";
    cin >> nt3;
    cout << "\t\t\tDigite la Nota del Ejercicio 4: ";
    cin >> nt4;
    
    cout << "\t\t\tDigite la Nota del Examen 1: ";
    cin >> exa1;
    cout << "\t\t\tDigite la Nota del Examen 2: ";
    cin >> exa2;
    cout << "\t\t\tDigite la Nota del Examen 3: ";
    cin >> exa3;
    
    cout << "\t\t\tDigite la Nota de la Investigaci�n: ";
    cin >> inv;

    Nfinal = (nt1 + nt2 + nt3 + nt4 + exa1 + exa2 + exa3 + inv) / 8;

    system("cls");

    cout << "\n\n";
    cout << "\t\t\t\t" << setw(43) << setfill('=') << "" << endl;
    cout << "\t\t\t\t" << setfill(' ') << setw(13) << " " << "Escuela SABELOTODO" << setw(20) << " " << endl;
    cout << "\t\t\t\t" << setw(43) << setfill('=') << "" << endl;
    cout << "\n\n";
    cout << "\t\t\t\t" << setfill(' ') << setw(30) << "Estudiante con la C�dula: " << ced << endl;
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