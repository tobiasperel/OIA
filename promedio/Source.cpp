#include<iostream>
#include<conio.h>
#include<math.h>
#include<string>
using namespace std;

int pedirCantidad(string mensaje) {
	int cantidad;
	cout << mensaje <<endl;
	cin >> cantidad;
	
	return cantidad;
}

float ingresoDeNotas(float cantidad, string mensaje) {
	
	float notas=0;

	for (int i = 1; i <= cantidad; i++) {
		int nuevo;
		cout << mensaje << endl;
		cin >> nuevo;
		notas = notas + nuevo;
	}
	return notas;
}
float calcularPromedio(float cantidad, float notas ) {
	
	float promedio;

	promedio = notas / cantidad;

	return promedio;

}

void mostrarMensaje (float promedio, string mensaje) {

	cout << mensaje<<promedio << endl;

}

void main() {

	float cantidad ;
	float notas, promedio;
	string mensajePedirCantidad = "ingrese la cantidad de notas";
	string mensajePedirNota = "Ingrese una nota";
	string mostrarPromedio = "Su promedio es: ";
	
	cantidad = pedirCantidad(mensajePedirCantidad);
	notas = ingresoDeNotas(cantidad, mensajePedirNota);
	promedio = calcularPromedio(cantidad, notas);
	mostrarMensaje(promedio, mostrarPromedio);
	

	system("pause");
}