#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<string>
using namespace std;



void traerMayor(int num1, int num2, int num3) {
	int mayor = num1;

	if (mayor < num2) {
		mayor = num2;
	}
	if (mayor < num3) {
		mayor = num3;
	}

	cout << mayor << endl;
}

string posicionMayor(int num1, int num2, int num3) {
	int mayor = -99999;
	string posicion;
	vector<int> numeros = { num1, num2,num3 };

	for (int i = 0; i < numeros.size(); i++) {
		if (mayor < numeros[i]) {
			mayor = numeros[i];
			posicion = to_string(i + 1);
		}
		else if (mayor == numeros[i]) {
			posicion = posicion + ":" + to_string(i + 1);
		}
	}
	posicion = "mayor: " + posicion;
	return posicion;
}

vector<int>ordenarNumeros(int num1, int num2, int num3, int num4, int num5) {

	vector<int> numeros = { num1, num2,num3,num4,num5 };
	sort(numeros.begin(), numeros.end());
	return numeros;
}

int calcularDia(int dia, int mes, int año) {
	int cuenta = 0;
	string posicion = "0";
	vector<int>dias = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	if (dia > 31 || mes > 12) {
		return cuenta - 1;
	}

	if (dia == 31 && (mes == 2 || mes == 4 || mes == 6 || mes == 9 || mes == 11)) {
		return cuenta - 1;
	}

	if (dia == 29 && año % 4 != 0) {
		return cuenta - 1;
	}

	for (int i = 0; i < mes - 1; i++) {
		cuenta += dias[i];
	}
	cuenta += dia;

	return cuenta;
}

void divisoresComun(int num1, int num2) {
	bool entro = false;
	vector<int>numeros = { num1,num2 };
	vector<int>divisores1;
	vector<int>divisores2;

	if (num1 == num2 || min(num1, num2) < 0) {
		cout << "Error, no se procesarán los valores" << endl;
		entro = true;
	}

	if (entro == false) {
		for (int j = 0; j < 2; j++) {
			for (int i = 1; i <= numeros[j]; i++) {
				if (numeros[j] % i == 0) {
					if (j == 0) {
						divisores1.push_back(i);
					}
					else {
						divisores2.push_back(i);
					}
				}
			}
		}
	}

	for (int i = 0; i < divisores1.size(); i++) {
		for (int j = 0; j < divisores2.size(); j++) {
			if (divisores1[i] == divisores2[j]) {
				cout << divisores1[i] << " ";
			}
		}
	}
	cout << endl;

}

bool ​IsNumeric(string numero) {
	bool esNumero = true;
	int contador = 0;

	for (int i = 0; i < numero.size(); i++) {
		if (numero[i] == ',') {
			contador++;
		}
		if (!isdigit(numero[i]) && numero[i] != ',') {
			
			esNumero = false;
		}
	}
	if (contador >= 2) {
		esNumero = false;
	}
	return esNumero;
}

void main() {
	//ej1
	traerMayor(5, 26, 14);
	//traerMayor(23, 50, 50);

	//ej2
	string posicion = posicionMayor(23, 50, 50);

	//ej3
	vector<int>numeros = ordenarNumeros(7, 5, 19, 7, 8);

	//ej4
	int cuenta = calcularDia(14, 3, 2017);

	//ej5
	divisoresComun(27, 54);

	//ej6
	bool esNumero = ​IsNumeric("123,56");

	system("pause");
}