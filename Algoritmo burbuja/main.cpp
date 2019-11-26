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

void valores ()
{

    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j <= num - 1; j++)
        {
            if (valor[i] > valor[j])
            {
                int aux = valor[i];
                valor[i] = valor[j];
                valor[j] = aux;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << valor[i];
    }

}
