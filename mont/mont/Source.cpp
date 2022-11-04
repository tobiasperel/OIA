#include<iostream>
using namespace std;

void main() {
	string nombre;
	int edad;
	float altura;

	cout << "Ingrese su nombre:  " << endl;
	cin >> nombre;
	system("cls");

	cout << "Ingrese su edad: " << endl;
	cin >> edad;
	system("cls");

	cout << "Ingrese su altura en centimetros: " << endl;
	cin >> altura;
	system("cls");

	if ((edad >= 7) && (altura >= 140)) {
		cout << nombre << "puede subir" << endl;
	}
	else {
		cout << nombre << "no cumple con los requisitos" << endl;
	}

	system("pause");
}