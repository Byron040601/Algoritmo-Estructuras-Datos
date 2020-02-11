#include <iostream>

using namespace std;

const int MAX = 50;
typedef double tArray[MAX];

void ingresar(tArray arreglo, int& cont);
void quicksort(tArray arreglo, int inicio, int fin);
int dividir(tArray arreglo, int inicio, int fin); 
void mostrar(tArray arreglo, int cont);

int main()
{
    tArray arreglo;
    int cont = 0;
    ingresar(arreglo, cont);
    cout << "Los elementos son." << endl;
    mostrar(arreglo, cont);
    cout << endl;
    cout << "Los elementos ordenados son." << endl;
    quicksort(arreglo, 0, cont - 1);
    mostrar(arreglo, cont);
    cout << endl;
    cout << "Presione ENTER para salir del programa." << endl;

    return 0;
}

void ingresar(tArray arreglo, int& cont)
{
    cont = 0;
    double dato;
    cout << "Ingrese el Valor(0 para terminar): ";
    cin >> dato;
    while (dato != 0 && cont < MAX)
    {
        arreglo[cont] = dato;
        cont++;
        cout << "Ingrese el Valor(0 para terminar): ";
        cin >> dato;
    }
}

void quicksort(tArray arreglo, int inicio, int fin)
{
    int pivote;
    if (inicio < fin)
    {
        pivote = dividir(arreglo, inicio, fin);
        quicksort(arreglo, inicio, pivote - 1);
        quicksort(arreglo, pivote + 1, fin);
    }
}

int dividir(tArray arreglo, int inicio, int fin)
{
    int izquierda, derecha, pivote, temp;
    pivote = arreglo[inicio];
    izquierda = inicio;
    derecha = fin;
    // Mientras no se cruzen los índices
    while (izquierda < derecha)
    {
        while (arreglo[derecha] > pivote)
        {
            derecha--;
        }

        while (izquierda < derecha && (arreglo[izquierda] <= pivote))
        {
            izquierda++;
        }
        // Si todavía no se cruzan los indices se sigue intercambiando
        if (izquierda < derecha)
        {
            temp = arreglo[izquierda];
            arreglo[izquierda] = arreglo[derecha];
            arreglo[derecha] = temp;
        }
        // Los índices ya se han cruzado, ponemos el pivot en el lugar que le corresponde
    }

    temp = arreglo[derecha];
    arreglo[derecha] = arreglo[inicio];
    arreglo[inicio] = temp;

    return derecha;
}

void mostrar(tArray arreglo, int cont)
{
    for (int i = 0; i < cont; i++)
    {
        cout << "| " << arreglo[i] << " |";
    }
}