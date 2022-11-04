#include<iostream>
#include<string>
using namespace std;

string pedirFigura (string mensaje) {

	string figura;
	cout << mensaje << endl;
	cin >> figura;

	return figura;
}

int ingreseUnLado(string mensaje) {


	int figura;
	cout << mensaje << endl;
	cin >> figura;

	return figura;

}
int siEsCuadrado (string figura,string mensaje,string mensaje2) {
	int lado,lado2,lado3;
	while (figura != "cuadrado" && figura != "rectangulo" && figura != "caja") {
		cout << "error" << endl;
		figura = pedirFigura(mensaje2);
	}
	if (figura == "cuadrado") {
		lado = ingreseUnLado(mensaje);
			lado = lado * 2;
	}

	if (figura == "rectangulo") {
		lado = ingreseUnLado(mensaje);
		lado2 = ingreseUnLado(mensaje);
		lado = lado * lado2;
	}
	if (figura == "caja") {
		lado = ingreseUnLado(mensaje);
		lado2 = ingreseUnLado(mensaje);
		lado3 = ingreseUnLado(mensaje);
		lado = lado * lado2*lado3;
	}
	return lado;
}

void mostrarLado(int lado) {
	cout << lado << endl;


}
void main() {
	int lado;
	string figura;

	figura = pedirFigura("ingrese el nombre de la figura");
	lado = siEsCuadrado(figura, "ingrese un lado", "ingrese el nombre de la figura");
	mostrarLado(lado);
	system("pause");
}