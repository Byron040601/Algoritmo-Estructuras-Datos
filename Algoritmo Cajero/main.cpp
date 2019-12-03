#include <iostream>
using namespace std;

const int cuenta = 50;
typedef int tArreglo[cuenta];
tArreglo valor;

int menu();

int main()
{
    int contador = 0, cuenta = 0;
    double dinero, suma = 0, suma2 = 0;
    cout << "BANCO DEL BARRIO" << endl;
    cout << "----------------" << endl;
    cout << "Bienvenido " << endl;
    cout << endl;

    cout << "Ingrese el dinero (0 para terminar): ";
    cin >> dinero;
    while (dinero != 0)
    {
        valor[cuenta] = dinero;
        cuenta++;
        cout << "Ingrese el dinero (0 para terminar): ";
        cin >> dinero;
        contador++;
    }
    int opcion = menu();
    while (opcion != 0)
    {
        switch (opcion)
        {
        case 1:
        {
            cout << "Los elementos de menor a mayor son: " << endl;

            for (int i = 0; i < contador; i++)
            {
                for (int j = i + 1; j <= contador - 1; j++)
                {
                    if (valor[i] > valor[j])
                    {
                        int aux = valor[i];
                        valor[i] = valor[j];
                        valor[j] = aux;
                    }
                }
            }
            for (int i = 0; i < contador; i++)
            {
                cout << valor[i]<< endl;
            }
        } break;

        case 2:
            {
                cout << "Los elementos de mayor a menor son: " << endl;

            for (int i = 0; i < contador; i++)
            {
                for (int j = i + 1; j <= contador - 1; j++)
                {
                    if (valor[i] < valor[j])
                    {
                        int aux = valor[i];
                        valor[i] = valor[j];
                        valor[j] = aux;
                    }
                }
            }
            for (int i = 0; i < contador; i++)
            {
                cout << valor[i]<< endl;
            }
            } break;

        case 3:
            {
                for (int i = 0; i < contador; i++)
                {
                    if ((valor[i] % 2) == 0)
                    {
                        suma = suma + valor[i];
                    }
                    if ((valor[i] % 2) != 0)
                    {
                        suma2 = suma2 + valor[i];
                    }
                }
                cout << "La suma de los valores pares es: " << suma << endl;
                cout << "La suma de los valores impares es: " << suma2 << endl;
            } break;
        }
        opcion = menu();
    }

    return 0;
}

int menu()
{
    int op = -1;
    while (op < 0 || op > 5 )
    {
        cout << " 1-Mostrar los elementos ordenados de menor a mayor" << endl;
        cout << " 2-Mostrar los elementos ordenados de mayor a menor" << endl;
        cout << " 3-Mostar la suma de los elementos pares e impares del arreglo" << endl;
        cout << " 0-Salir" << endl;
        cout << " Opcion: ";
        cin >> op;
    }
    return op;
}






