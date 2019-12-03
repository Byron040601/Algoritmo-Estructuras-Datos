#include <iostream>
using namespace std;

const int semana = 5;

typedef double tDia [semana];
tDia dia;

int main ()
{
	int suma = 0;
	double sueldo = 0;
	for (int i = 0; i < semana; i++)
	{
		cout << "Ingrese las horas trabajadas el dia " << i + 1 << " : ";
		cin >> dia[i];
		suma = suma + dia[i];
	}
	for (int j = 0; j < semana; j++)
	{
		cout << "Ingrese el sueldo por dia " << j + 1 << " : ";
		cin >> dia[j];
		sueldo = sueldo + dia[j];
	}
	cout << "El numero de horas trabajadas en la semana es: " << suma << endl;
	cout << "El sueldo total es: " << suma * sueldo;
	return 0;
}
