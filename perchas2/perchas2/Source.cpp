
Meet
Nuevo
Iniciar una reunión
Unirse a una reunión
Chat

10 de 115
tp triangulo
Recibidos
x

Tobias Perel <pereltobias@gmail.com>
Archivos adjuntos
22 may. 2020 10:14 (hace 6 días)
para mí


Zona de los archivos adjuntos

#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

float medidas() {
	float lado;
	cout << "ingrese un lado de triangulo" << endl;
	cin >> lado;
	return lado;
}

int contruir(float ladoA, float ladoB, float ladoC) {
	int sePuede;
	if ((ladoA >= ladoB + ladoC) || (ladoB >= ladoA + ladoC) || (ladoC >= ladoB + ladoA)) {
		cout << " No se puede contruir" << endl;
		sePuede = 0;
	}
	else {
		cout << "Se puede construir" << endl;
		sePuede = 1;
	}
	return sePuede;
}

void queTipoEs(int mensaje, float ladoA, float ladoB, float ladoC) {

	if (mensaje == 0) {
		cout << " Debido al teorema la desigualdad triangular, su triangulo no se puede contruir " << endl;
	}
	else {
		if ((ladoA == ladoB) && (ladoA == ladoC)) {
			cout << " El triangulo es equilatero" << endl;
		}
		if ((ladoA == ladoB) && (ladoC != ladoA) || (ladoA == ladoC) && (ladoB != ladoA) || (ladoC == ladoB) && (ladoC != ladoA)) {
			cout << "El triangulo es isoceles" << endl;
		}

		if ((ladoA != ladoB) && (ladoA != ladoC) && (ladoB != ladoC)) {
			cout << " El triangulo es escaleno" << endl;
		}
	}
}

float perimetro(float ladoA, float ladoB, float ladoC, int mensaje) {
	float per;

	if (mensaje == 1) {
		per = ladoA + ladoB + ladoC;
		cout << " El perimetro del trinagulo es: " << per << endl;
	}
	return per;
}

void formulaHeron(float ladoA, float ladoB, float ladoC, int mensaje, float contorno) {
	float superficie;
	if (mensaje == 1) {
		contorno = contorno / 2;
		superficie = sqrt(contorno * (contorno - ladoA) * (contorno - ladoB) * (contorno - ladoC));                 // con sqrt calculo la raiz de un numero
		cout << " La superficie total es: " << superficie << endl;
	}
}
void main() {
	float ladoA, ladoB, ladoC, contorno;
	int mensaje;
	ladoA = medidas();
	ladoB = medidas();
	ladoC = medidas();
	mensaje = contruir(ladoA, ladoB, ladoC);
	queTipoEs(mensaje, ladoA, ladoB, ladoC);
	contorno = perimetro(ladoA, ladoB, ladoC, mensaje);
	formulaHeron(ladoA, ladoB, ladoC, mensaje, contorno);
	system("pause");
}