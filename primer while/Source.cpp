#include<iostream>
using namespace std;

int pedirCantidad(string mensaje) {
	int cantidad;
	cout << mensaje << endl;
	cin >> cantidad;
	return cantidad;
}

int validarCantidad(string mensaje) {
	int cantidad;
	cantidad = pedirCantidad(mensaje);

	while (cantidad < 0) {
		cout << "La cantidad de limones no puede ser negativo"<<endl;
		cantidad = pedirCantidad(mensaje);

	}
	return cantidad;
}

void mostrarCantidad(int cantidad,string mensaje) {
	cout << mensaje << cantidad << endl;

}

void main() {

	int cantidad;

	cantidad = validarCantidad ( "ingrese la cantidad de limones " );
	mostrarCantidad(cantidad, "La cantidad de limones es: ");

	system("pause");
}