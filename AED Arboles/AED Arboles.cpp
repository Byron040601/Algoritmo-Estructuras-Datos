#include <iostream>

using namespace std;

struct nodo
{
    int dato;
    nodo* derecho;
    nodo* izquierdo;
};

nodo* crear_nodo_padres_hijos(int n);
nodo* Arbol_binario;

void insertar_albol_binario(nodo*& arbolbinario, int n);
void mostrar_arbol_binario(nodo*& arbolbinario, int separador);

void pre_orden(nodo*& arbol_binario);
void in_orden(nodo*& arbol_binario);
void post_orden(nodo*& arbol_binario);

int main()
{
    int n;
    for (int i = 0; i < 9; i++)
    {
        cout << "Insertar nodos: ";
        cin >> n;
        insertar_albol_binario(Arbol_binario, n);
    }
    mostrar_arbol_binario(Arbol_binario, 0);
    cout << "Recorido pre-Orden." << endl;
    pre_orden(Arbol_binario);
    cout << endl;
    cout << "Recorrido pos-Orden." << endl;
    post_orden(Arbol_binario);
    cout << endl;
    cout << "Recorrido en in-Orden." << endl;
    in_orden(Arbol_binario);

    return 0;
}

nodo* crear_nodo_padres_hijos(int n)
{
    //Inicializar el arbol con nodos
    nodo* nuevo = new nodo();
    //Asignar os valores al nodo creado
    nuevo->dato = n;
    nuevo->derecho = NULL;
    nuevo->izquierdo = NULL;

    return nuevo;
}

void insertar_albol_binario(nodo*& arbolbinario, int n)
{
    if (arbolbinario == NULL)
    {
        nodo* nuevo = crear_nodo_padres_hijos(n);
        arbolbinario = nuevo;
    }
    else {
        //insertar nodo raiz
        int dato_raiz = arbolbinario->dato;
        if (n < dato_raiz)
        {
            //insertar el siguiente nodo en el su arbol izquierdo
            insertar_albol_binario(arbolbinario->izquierdo, n);
        }
        else {
            insertar_albol_binario(arbolbinario->derecho, n);
        }
    }
}

void mostrar_arbol_binario(nodo*& arbolbinario, int separador)
{
    if (arbolbinario == NULL)
    {
        return;
    }
    else {
        mostrar_arbol_binario(arbolbinario->derecho, separador + 1);
        for (int i = 0; i < separador; i++)
        {
            cout << " ";
        }
        cout << arbolbinario->dato << endl;
        mostrar_arbol_binario(arbolbinario->izquierdo, separador + 1);
    }
}

void pre_orden(nodo*& arbol_binario)
{
    if (arbol_binario == NULL)
    {
        return;
    }
    else {
        //raiz
        cout << arbol_binario->dato << "-";
        //izquierda
        pre_orden(arbol_binario->izquierdo);
        //derecha
        pre_orden(arbol_binario->derecho);
    }
}

void in_orden(nodo*& arbol_binario)
{
    if (arbol_binario == NULL)
    {
        return;
    }
    else {
        //izquierda
        in_orden(arbol_binario->izquierdo);
        //raiz
        cout << arbol_binario->dato << "-";
        //derecha
        in_orden(arbol_binario->derecho);
    }
}

void post_orden(nodo*& arbol_binario)
{
    if (arbol_binario == NULL)
    {
        return;
    }
    else {
        //izquierda
        post_orden(arbol_binario->izquierdo);
        //derecha
        post_orden(arbol_binario->derecho);
        //raiz
        cout << arbol_binario->dato << "-";
    }
}