#include <iostream>
#include <fstream>

using namespace std;

void agregar (int a[], int b);
void busqueda (int a[], int b, int dato);
void imprimir (int a[], int b);

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    int n, dato;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;
    cout << '\n';
    int arreglo[n];
    agregar(arreglo, n);
    cout << '\n';
    cout << "Ingrese el dato que desea buscar: ";
    cin >> dato;
    cout << '\n';
    busqueda(arreglo, n, dato);
    cout << '\n';
    cout << "Los datos son: ";
    imprimir (arreglo, n);
    cout << '\n';
}

void agregar (int a[], int b)
{
    for (int i = 0; i < b; i++)
    {
        cout << "Ingrese el valor: ";
        cin >> a[i];
    }
}

void busqueda (int a[], int b, int dato)
{
    int i = 0;
    char des = 'F';

    ofstream archivo;
    archivo.open("Busqueda.txt");
    archivo << "Los elementos del archivo son: ";
    for (int i = 0; i < b; i++)
    {
        archivo << a[i] << "|";
    }
    cout << '\n';

    for (i; i < b; i++)
    {
        if (a[i] == dato)
        {
            des = 'V';
            if (des == 'V')
            {
                cout << "Dato encontrado en la posicion " << i + 1 << endl;
                archivo << "Dato encontrado en la posicion " << i + 1;
            }
        }
    }

    if (des == 'F')
    {
        cout <<"ERROR dato no encontrado" << endl;
        archivo << "ERROR dato no encontrado";
    }
}

void imprimir (int a[], int b)
{
    for (int i = 0; i < b; i++)
    {
        cout << "|" << a[i] << "|";
    }
}





