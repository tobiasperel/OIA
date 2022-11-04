#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

// Funciones 

float tomarMedidas() {
	float lado;
	cout << "ingrese un lado de triangulo" << endl;
	cin >> lado;
	return lado;
}

bool sePuedeContruir(float ladoA, float ladoB, float ladoC) {
	bool sePuede;
	if ((ladoA >= ladoB + ladoC) || (ladoB >= ladoA + ladoC) || (ladoC >= ladoB + ladoA)) {
		cout << " No se puede contruir" << endl;
		sePuede = false;
	}
	else {
		cout << "Se puede construir" << endl;
		sePuede = true;
	}
	return sePuede;
}

string equilatero(bool mensaje,float ladoA, float ladoB, float ladoC) {
		string nombre;
		if (mensaje == true) {
			if ((ladoA == ladoB) && (ladoA == ladoC)) {
				nombre = "equilatero";
			}
		}
		return nombre;
	}

string isoceles(bool mensaje, float ladoA, float ladoB, float ladoC) {
		string nombre;
		if (mensaje == true) {
			if ((ladoA == ladoB) && (ladoC != ladoA) || (ladoA == ladoC) && (ladoB != ladoA) || (ladoC == ladoB) && (ladoC != ladoA)) {
				
				nombre = "isoceles";
			}
		}
		return nombre;
	}
		
string escaleno (bool mensaje, float ladoA, float ladoB, float ladoC) {
		
		string nombre;
		if (mensaje == false) {
			cout << " Debido al teorema la desigualdad triangular, su triangulo no se puede contruir " << endl;
		}
		else if ((ladoA != ladoB) && (ladoA != ladoC) && (ladoB != ladoC)) {
			nombre = "escaleno";
		}
		return nombre;
	}

void mostrarTipo(string nombreDelTriangulo1,string nombreDelTriangulo2, string nombreDelTriangulo3, bool mensaje) {
		if (mensaje == 1) {
			cout << "Este triangulo es: " << nombreDelTriangulo1<< nombreDelTriangulo2<< nombreDelTriangulo3 << endl;

		}

	}

float calcularPerimetro(float ladoA, float ladoB, float ladoC, bool mensaje) {
	float per;
       per = ladoA + ladoB + ladoC;
	return per;
}

void mostrarPerimetro(float contorno) {

	cout << " El perimetro del trinagulo es: " << contorno << endl;

}

float calcularFormulaHeron(float ladoA, float ladoB, float ladoC, bool mensaje, float contorno) {
	float superficie;
	
		contorno = contorno / 2;
		superficie = sqrt(contorno * (contorno - ladoA) * (contorno - ladoB) * (contorno - ladoC));                 // con sqrt calculo la raiz de un numero

		return superficie;
}

void mostrarFormulaHeron(float superficie) {

	cout << " La superficie del triangulo es: " << superficie << endl;
}

void main() {

	//Definicion de variables

	float ladoA, ladoB, ladoC, contorno,superficie;
	bool mensaje;
    string nombreDelTriangulo1, nombreDelTriangulo2, nombreDelTriangulo3;

	//llamadas a funciones

	ladoA = tomarMedidas();
	ladoB = tomarMedidas();
	ladoC = tomarMedidas();
	mensaje = sePuedeContruir (ladoA, ladoB, ladoC);
	
	nombreDelTriangulo1 = equilatero(mensaje, ladoA, ladoB, ladoC);
	nombreDelTriangulo2 = isoceles(mensaje, ladoA, ladoB, ladoC);
	nombreDelTriangulo3 = escaleno(mensaje, ladoA, ladoB, ladoC);
    mostrarTipo(nombreDelTriangulo1, nombreDelTriangulo2, nombreDelTriangulo3 ,mensaje);

	// Superficie y Perimetro

	if (mensaje == true) {

		contorno = calcularPerimetro(ladoA, ladoB, ladoC, mensaje);
		mostrarPerimetro(contorno);

        superficie = calcularFormulaHeron(ladoA, ladoB, ladoC, mensaje, contorno);
		mostrarFormulaHeron(superficie);
	}

	system("pause");
}