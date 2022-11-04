#include <iostream>
#include <string>
#include<vector>

using namespace std;

void ingresarVecEnteros(int vec[], int TOPE, string mensaje) {
	for (int pos = 0; pos < TOPE; pos++) {
		cout << mensaje;
		cin >> vec[pos];
	}
}

void ingresarVecChar(char vec[], int TOPE, string mensaje) {
	for (int pos = 0; pos < TOPE; pos++) {
		cout << mensaje<<endl;
		cin >> vec[pos];
	}
}


void mostrarVecEnteros(int vec[], int TOPE, string mensaje) {
	for (int pos = 0; pos < TOPE; pos++) {
		cout << mensaje << vec[pos] << endl;
	}
}

void mostrarVecChar(char vec[], int TOPE, string mensaje) {
	for (int pos = 0; pos < TOPE; pos++) {
		cout << mensaje << vec[pos] << endl;
	}
}

int sumarValoresVecEnteros(int vec[], int TOPE) {
	int resu = 0;
	for (int pos = 0; pos < TOPE; pos++) {
		resu = resu + vec[pos];
	}
	return resu;
}

float calcularPromedioVecEnteros(int vec[], int TOPE) {
	float resu = 0;
	int suma = 0;
	suma = sumarValoresVecEnteros(vec, TOPE);
	resu = suma / TOPE;
	return resu;
}

int main() {
	const int TOPE_ALUMNOS = 4;
	int notas[TOPE_ALUMNOS]; //la posicion va desde 0 hasta 4
	float prom;
	char caracteres[TOPE_ALUMNOS];

	ingresarVecEnteros(notas, TOPE_ALUMNOS, "Cuanto saco el alumno/a??:");
	mostrarVecEnteros(notas, TOPE_ALUMNOS, "El alumno/a saco: ");
	prom = calcularPromedioVecEnteros(notas, TOPE_ALUMNOS);
	cout << "Promedio: " << prom;
	ingresarVecChar(caracteres, TOPE_ALUMNOS, "Ingrese un caracter:");
	mostrarVecChar(caracteres, TOPE_ALUMNOS, "los caracteres son: ");

}