#include <iostream>
using namespace std;

const int num = 5;
typedef int tArreglo[num];
tArreglo valor;
void valores();

int main()
{
    valor;
    for (int i = 0; i < num; i++)
    {
        cout << "Ingrese los numeros: ";
        cin >> valor [i];
    }
    valores();
    return 0;
}

void valores()
{
    int aux, min;
    for (int i = 0; i < num; i++)
    {
        min = i;
        for (int j = i + 1; j < num; j++)
        {
            if (valor[min] > valor[j])
            {
                min = j;
            }
        }
        aux = valor[i];
        valor [i] = valor [min];
        valor[min] = aux;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << valor[i];
    }
}
