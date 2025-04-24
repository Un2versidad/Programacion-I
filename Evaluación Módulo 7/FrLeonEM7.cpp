/*
						  MÓDULO N° 7
						EVALUACIÓN
						
	Uso del comando o sentencia for.
	Haga un programa que genere una matriz identidad de orden 5
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{	
	int matriz[5][5], c1, c2;
		
	for (c1 = 0; c1 < 5; ++c1)
	{
		for (c2 = 0; c2 < 5; ++c2)
		{	
			if (c1 == c2)
				matriz[c1][c2] = 1;
			else
				matriz[c1][c2] = 0;
								
			cout << matriz[c1][c2];
		}
		cout << endl;
	}
	
	system("pause");
    return 0;
}
