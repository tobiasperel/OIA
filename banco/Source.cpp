#include<iostream>
using namespace std;

int pedirMensaje(string mensaje) {
	int pin;
	cout << mensaje << endl;
	cin >> pin;
	return pin;
}
verifi
void bienvenida(string mensaje) {
	cout << mensaje << endl;

}
void main() {
	int pin;
	pin= pedirMensaje("ingrese su pin: ");

	system("pause");

}