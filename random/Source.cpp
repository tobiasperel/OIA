#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int pedirEntero(string mensaje) {
	int entero;
	cout << mensaje << endl;
	cin >> entero;
	return entero;
}

int verificarCantidad(int cantidad, string mensaje) {
	
	while (cantidad > 6 || cantidad < 1) {

		cout << "Error, la cantidad de caballos debe estar entre 1 y 6"<<endl;
		cantidad = pedirEntero(mensaje);

	}
	return cantidad;
}

string pedirString(string mensaje) {

	string nombre;

	cout << mensaje << endl;
	cin >> nombre;
	return nombre;

}


void main() {

	int cantidad,pasos,pasosTotales=0,n1;
	int n[10];
	string nombre,nombreCab[10], color[10];
	

	cantidad = pedirEntero("Ingrese la cantidad de caballos de la carrera: ");
	cantidad = verificarCantidad(cantidad, "Ingrese la cantidad de caballos de la carrera: ");
	

	for (int i; i <= cantidad; i++) {
		n1 = pedirEntero("ingrese el numero del caballo ");
		n[i] = n1;
	}

	for (int i; i <= cantidad; i++) {
		nombre= pedirString ("ingrese el nombre del caballo");
		nombreCab[i] = nombre;
	}
	
	for (int i; i <= cantidad; i++) {
		nombre = pedirEntero("ingrese el numero del caballo ");
		color[i] = nombre;
	}

	/*
	while (pasosTotales < 1000) {
		pasos = 1 + rand() % (21 - 1);
		pasosTotales = pasosTotales + pasos;
		cout << pasos << endl;
	}
	if (pasosTotales >= 1000) {
		cout << "felcidades el caballo termino la c" << endl;

	}
	*/
	system("pause");
}