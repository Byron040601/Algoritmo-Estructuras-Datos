#include <iostream>

using namespace std;

const int MAX = 50;
typedef int tArray[MAX];

void ingresar(tArray array, int& cont);
void ordenar(tArray array, int cont);
void mostrar(tArray array, int cont);

int main()
{
	tArray datos;
	int cont = 0;
	ingresar(datos, cont);
	cout << "Los datos antes de ordenar son." << endl;
	mostrar(datos, cont);
	cout << "Los datos ordenados son." << endl;
	ordenar(datos, cont);
	mostrar(datos, cont);

}

void ingresar(tArray array, int& cont)
{
	double valor;
	cout << "Ingrese el dato (0 para terminar): ";
	cin >> valor;
	while (valor != 0)
	{
		array[cont] = valor;
		cont++;
		cout << "Ingrese el dato (0 para terminar): ";
		cin >> valor;
	}
	cout << endl;
}

void mostrar(tArray array, int cont)
{
	for (int i = 0; i < cont; i++)
	{
		cout << "| " << array[i] << " |"; 
	}
	cout << endl << endl;;
}

void ordenar(tArray array, int cont)
{
	for (int i = 1; i < cont; i++)
	{
		int pos = i;
		while ((pos > 0) && (array[pos - 1] > array[pos]))
		{
			int tmp = array[pos];
			array[pos] = array[pos - 1];
			array[pos - 1] = tmp;
			pos--;
		}
	}
}
