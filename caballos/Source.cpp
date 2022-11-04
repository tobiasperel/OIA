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

		cout << "Error, la cantidad de caballos debe estar entre 1 y 6" << endl;
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

/*int calcularGanador(int num[10], string nombreCab[10],string color[10],int cantidad) {
	
	int pasos1, pasos2, pasos3, pasos4, pasos5, pasos6;
	int pasosTotales1, pasosTotales2, pasosTotales3, pasosTotales4, pasosTotales5, pasosTotales6;

	while (pasosTotales1 < 1000 || pasosTotales2 < 1000|| pasosTotales3 < 1000|| pasosTotales4 < 1000|| pasosTotales5 < 1000|| pasosTotales6 < 1000) {
		pasos1 = 1 + rand() % (21 - 1);
		pasos2 = 1 + rand() % (21 - 1);
		pasos3 = 1 + rand() % (21 - 1);
		pasos4 = 1 + rand() % (21 - 1);
		pasos5 = 1 + rand() % (21 - 1);
		pasos6 = 1 + rand() % (21 - 1);
		pasosTotales1 = pasosTotales1 + pasos1;
		pasosTotales2 = pasosTotales2 + pasos2;
		pasosTotales3 = pasosTotales3 + pasos3;
		pasosTotales4 = pasosTotales4 + pasos4;
		pasosTotales5 = pasosTotales5 + pasos5;
		pasosTotales6 = pasosTotales6 + pasos6;

		cout << "el caballo n1 va" << pasosTotales1 << endl;
		cout << "el caballo n2 va" << pasosTotales1 << endl;
		cout << "el caballo n3 va" << pasosTotales1 << endl;
		cout << "el caballo n4 va" << pasosTotales1 << endl;
		cout << "el caballo n5 va" << pasosTotales1 << endl;
		cout << "el caballo n6 va" << pasosTotales1 << endl;


	}
	
	
	

}
*/

void main() {

	int cantidad, pasos, pasosTotales = 0, n1, n[10];
	int pasos1, pasos2, pasos3, pasos4, pasos5, pasos6;
	int pasosTotales1, pasosTotales2, pasosTotales3, pasosTotales4, pasosTotales5, pasosTotales6;


	string nombre, nombreCab[10], color[10];


	cantidad = pedirEntero("Ingrese la cantidad de caballos de la carrera: ");
	cantidad = verificarCantidad(cantidad, "Ingrese la cantidad de caballos de la carrera: ");

	for (int i = 1; i <= cantidad; i++) {

		n1 = pedirEntero("ingrese el numero del caballo ");
		n[i] = n1;
	}

	for (int i = 1; i <= cantidad; i++) {
		nombre = pedirString("ingrese el color del caballo ");
		while (nombre != "azul" & nombre != "rojo" & nombre != "amarillo" & nombre != "verde" & nombre != "violeta" & nombre != "rosa") {
			cout << "color no reconocido" << endl;
			nombre = pedirString("ingrese el color del caballo ");
		}
		color[i] = nombre;
	}
	for (int i = 1; i <= cantidad; i++) {
		nombre = pedirString("ingrese el nombre del caballo");
		nombreCab[i] = nombre;


		
		while (pasosTotales1 < 1000 || pasosTotales2 < 1000 || pasosTotales3 < 1000 || pasosTotales4 < 1000 || pasosTotales5 < 1000 || pasosTotales6 < 1000) {
			pasos1 = 1 + rand() % (21 - 1);
			pasos2 = 1 + rand() % (21 - 1);
			pasos3 = 1 + rand() % (21 - 1);
			pasos4 = 1 + rand() % (21 - 1);
			pasos5 = 1 + rand() % (21 - 1);
			pasos6 = 1 + rand() % (21 - 1);
			pasosTotales1 = pasosTotales1 + pasos1;
			pasosTotales2 = pasosTotales2 + pasos2;
			pasosTotales3 = pasosTotales3 + pasos3;
			pasosTotales4 = pasosTotales4 + pasos4;
			pasosTotales5 = pasosTotales5 + pasos5;
			pasosTotales6 = pasosTotales6 + pasos6;

			cout << "el caballo n1 va" << pasosTotales1 << endl;
			cout << "el caballo n2 va" << pasosTotales1 << endl;
			cout << "el caballo n3 va" << pasosTotales1 << endl;
			cout << "el caballo n4 va" << pasosTotales1 << endl;
			cout << "el caballo n5 va" << pasosTotales1 << endl;
			cout << "el caballo n6 va" << pasosTotales1 << endl;


		}
	}
	system("pause");
}