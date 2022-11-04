#include<iostream>
using namespace std;
void saludar() {
	cout << " Hola mundo" << endl;
}
void SaludarPersona(string nombre) {
	cout << " hola: " << nombre << endl;

}

string pedirNombre() {
	string nombre;
	cout << "Ingrese un nombre: "; cin >> nombre;
	return nombre;
}
void main() {
	string nombreResibido;

	saludar();
	nombreResibido = pedirNombre();
	SaludarPersona(nombreResibido);

	system("pause");
}