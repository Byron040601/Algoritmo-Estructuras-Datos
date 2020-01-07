#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string contacto;
string nombre;
string apellido;
ofstream archivo;
int edad;

void contactos();
void muestra();
int menu();

int main()
{
	cout << "Ingrese el nombre del archivo: ";
	getline(cin, contacto);
	archivo.open(contacto.c_str(), ios::out);
	int opcion = menu();
	while (opcion != 0)
	{
		switch (opcion)
		{
		case 1:
		{
			contactos();
			break;
		} 

		case 2:
		{
			muestra();
			break;
		}

		}
		opcion = menu();
		cout << endl;
	}

}

void contactos()
{
	string des;
	cin.ignore();
	do
	{
		cout << "Ingrese el nombre: ";
		getline(cin, nombre, '\n');
		cout << "Ingrese el apellido: ";
		getline(cin, apellido, '\n');
		cout << "Ingrese la edad: ";
		cin >> edad;
		cout << endl;
		archivo << nombre << " " <<apellido << " " << edad << '\n';
		cout << "Desea ingresar otro contacto (si/no): ";
		cin >> des;
		cin.ignore();
	} while (des == "si");
	archivo.close();
}


void muestra()
{
	ifstream archivolec("contactos.txt");
	string texto;

	while (!archivolec.eof())
	{
		archivolec >> nombre >> apellido >> edad;
		if (!archivolec.eof())
		{
			getline(archivolec, texto);
			cout << "Nombre: " << nombre << endl;
			cout << "Apellido: " << apellido << endl;
			cout << "Edad: " << edad << endl;
			cout << endl;
		}
	}
	archivolec.close();
}

int menu()
{
	int op = -1;
	while (op < 0 || op > 2)
	{
		cout << "1.- Ingresar contacto" << '\n';
		cout << "2.- Mostrar contactos" << '\n';
		cout << "0 Salir" << '\n';
		cout << "Opcion: ";
		cin >> op;
	}
	return op;
}