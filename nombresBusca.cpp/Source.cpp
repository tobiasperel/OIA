#include<iostream>
#include<vector>
using namespace std;

vector<string>pedirVector(string mensaje,const int CANTIDAD) {

	vector<string> nombres(CANTIDAD);

	for (int i = 0; i < CANTIDAD; i++) {
		cout << mensaje <<i+1<< endl;
		cin >> nombres[i];
	}

	return nombres;
}
string pedirString(string mensaje) {
	
	string nombre;
	cout << mensaje << endl;
	cin >> nombre;
	return nombre;
}
int buscarNombre(vector<string>nombres,const int CANTIDAD,string nombre) {
	int posicion = -1;

	for (int i = 0; i < CANTIDAD; i++) {
		if (nombre == nombres[i]) {
			posicion = i+1;
			break;
		}
	}

	return posicion;
}
void mostrarInt(int posicion,string mensaje) {
	cout << mensaje << posicion << endl;
}
void main() {

	const int CANTIDAD = 5;
	vector<string> nombres(CANTIDAD);
	nombres = pedirVector("Ingrese el nombre numero: ",CANTIDAD);
	string nombre = pedirString("Ingrese el nombre que desea Buscar: ");
	system("cls");
	int posicion = buscarNombre(nombres, CANTIDAD, nombre);
	mostrarInt(posicion, "La posicion donde se encontraba tu nombre es: ");
	system("pause");
}