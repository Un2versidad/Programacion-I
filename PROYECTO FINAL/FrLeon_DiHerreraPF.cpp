#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <locale.h>
#include <windows.h>

using namespace std;

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main() {
    setlocale(LC_ALL, "Spanish");
    string dEmpl[3][100], opc;
    int aServ[100], cEmpl = -1, c80 = 0, c100 = 0, c120 = 0;
    float mBono[3][100], tBono = 0;

    do {
        cEmpl++;
        system("cls");
        setColor(14);
   		cout << setfill(' ') << setw(13) << " " << "\tEmpleado N°" << cEmpl + 1 << setw(20) << " " << endl;
        cout << setw(43) << setfill('=') << "" << endl;

        setColor(15);
        cout << "\nDigite su Cédula: ";
        cin >> dEmpl[0][cEmpl];

        cout << "\nDigite su Nombre: ";
        cin >> dEmpl[1][cEmpl];

        cout << "\nDigite su Apellido: ";
        cin >> dEmpl[2][cEmpl];

        cout << "\nDigite sus Años de Servicios: ";
        cin >> aServ[cEmpl];

        cout << "\nDigite su Sueldo Actual: ";
        cin >> mBono[0][cEmpl];

        float bono = 0;
        if (aServ[cEmpl] >= 2 && aServ[cEmpl] < 10) bono = mBono[0][cEmpl] * 0.80, c80++;
        else if (aServ[cEmpl] >= 10 && aServ[cEmpl] < 12) bono = mBono[0][cEmpl] * 1.00, c100++;
        else if (aServ[cEmpl] >= 12) bono = mBono[0][cEmpl] * 1.20, c120++;

        mBono[1][cEmpl] = bono;
        tBono += bono;

        cout << "\nDesea Continuar con el Siguiente Empleado? (s/n): ";
        cin >> opc;
    } while (opc == "s" || opc == "S");

    system("cls");
    int tProc = c80 + c100 + c120;
    setColor(11);
    cout << "\n\n" << setw(79) << setfill('=') << "" << endl;
	cout << setfill(' ') << setw(25) << " " << "E M P R E S A A L F A O M E G A" << setw(20) << " " << endl; 
	cout <<"\n" << setfill(' ') << setw(22) << " " << "I N C E N T I V O S D E N A V I D A D" << setw(20) << " " << endl;
    cout << setw(79) << setfill('=') << "" << endl;
    setColor(15);
	cout << setfill(' ') << setw(5) << " " << "Cédula" << setw(5) << " " << "\t\tAños de Servicio" << "\tBono"<< endl;
    for (int i = 0; i <= cEmpl; i++) {
        if (mBono[1][i] != 0) {
			cout << setfill(' ') << setw(13) << dEmpl[0][i] << setw(28) << aServ[i]  << setw(15) << fixed << setprecision(2) << "B/. " << mBono[1][i] << endl;
        }
    }
    setColor(14);
	cout << "\n\n" << setw(79) << setfill('=') << "" << endl;
   	cout << setfill(' ') << setw(15) << "CANTIDAD DE EMPLEADOS PROCESADOS: " << cEmpl + 1 << setw(20) << " " << endl;
    cout << "\n\n" << setw(15) << "TOTAL DE DINERO A PAGAR EN BONOS: " << fixed << setprecision(2) << "B/. " << tBono << endl;
    cout << setfill(' ') << setw(15) << "CANTIDAD DE BONOS AL: 80%: " << c80 << endl;
    cout << setfill(' ') << setw(27) << "100%: " << c100  << endl;
    cout << setfill(' ') << setw(27) << "120%: " << c120  << endl;
    cout << "\n" << setw(79) << setfill('=') << "" << endl;
    cout << endl;

    setColor(7);
    system("pause");
    return 0;
}
