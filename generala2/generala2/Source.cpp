#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<vector>
using namespace std;

void ingresarCaras(vector<int>& caras, int DADOS) {
	int veces = 1;
	for (int i = 0; i < DADOS; i++) {
		cout << veces << " Ingrese la cantidad de caras" << endl;
		cin >> caras[i];
		while (caras[i] < 3 || caras[i]>10) {
			cout << "Parametro no valido, las caras deben estar entre 3 y 10" << endl;
			cin >> caras[i];
		}
		veces++;
	}
}
void calcularEscalera(vector<int>numeros) {
	vector<int>opcion1{ 1,3,4,5,6 };
	vector<int>opcion2{ 2,3,4,5,6 };
	vector<int>opcion3{ 1,2,3,4,5 };
	if (opcion1 == numeros || opcion2 == numeros || opcion3 == numeros) {
		cout << "hay escalera" << endl;
		system("pause");
	}
}
int calcularGenerala(vector<int> CARAS, vector<int>numeros, int DADOS) {
	int contador = 1;
	int veces = 1;
	bool hayRepetidos = false;
	vector<bool>distinto(10, false);



	while (contador < DADOS) {
		contador = 1;
		hayRepetidos = false;
		vector<bool>distinto(10, false);
		for (int i = 0; i < DADOS; i++) {
			numeros[i] = 1 + rand() % (CARAS[i] + 1 - 1);

			if (numeros[0] == numeros[i] && i != 0) {
				contador++;
			}
		}
		cout << veces << ": ";
		veces++;
		for (int i = 0; i < DADOS; i++) {
			cout << numeros[i] << " ";
		}
		cout << endl;


		for (int i = 0; i < DADOS; i++) {

			if (distinto[numeros[i]] == true) {
				hayRepetidos = true;
			}
			if (distinto[numeros[i]] == false) {
				distinto[numeros[i]] = true;
			}
			
			if (i == DADOS - 1 && hayRepetidos == false) {
				cout << endl << "Todos los numeros fueron distintos" << endl;
				system("pause");
			}
			
		}
		
		// calcularEscalera(numeros);

	}

	veces++;
	return veces;
}
void mostrarContador(int veces) {
	cout << "felicidades en el tiro numero: " << veces - 2 << " a sacado generala" << endl;
}

void main() {
	srand(time(NULL));
	int veces;
	const int DADOS = 5;
	vector<int> numeros(DADOS);
	vector<int> caras(DADOS);

	ingresarCaras(caras, DADOS);
	system("cls");
	veces = calcularGenerala(caras, numeros, DADOS);

	mostrarContador(veces);

	system("pause");
}