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
		cout << " Debido al teorema la desigualdad triangular, su triangulo no se puede contruir " << endl;
		sePuede = false;
	}
	else {
		cout << "Se puede construir" << endl;
		sePuede = true;
	}
	return sePuede;
}

string equilatero(bool mensaje, float ladoA, float ladoB, float ladoC) {
	string nombre;
	if (mensaje == true) {
		if ((ladoA == ladoB) && (ladoA == ladoC)) {
			nombre = "equilatero";
		}
		else {
			nombre = "ninguno";
		}
	}
	return nombre;
}

string isoceles(bool mensaje, float ladoA, float ladoB, float ladoC,string nombreDelTriangulo1) {
	string nombre;
	if (mensaje == true) {
		if ((ladoA == ladoB) && (ladoC != ladoA) || (ladoA == ladoC) && (ladoB != ladoA) || (ladoC == ladoB) && (ladoC != ladoA)) {

			nombre = "isoceles";
		}
		else {
			nombre = nombreDelTriangulo1;
		}
	}
	return nombre;
}

string escaleno(bool mensaje, float ladoA, float ladoB, float ladoC, string nombreDelTriangulo1) {

	string nombre;
	if (mensaje == true) {
		if ((ladoA != ladoB) && (ladoA != ladoC) && (ladoB != ladoC)) {
			nombre = "escaleno";
		}
		else {
			
			nombre = nombreDelTriangulo1;
		}
	}
	
	return nombre;
}

void mostrarTipo(string nombreDelTriangulo1,string nombreDelTriangulo2, bool mensaje) {
	if (mensaje == true) {
		cout << "Este triangulo es: " << nombreDelTriangulo1  << endl;

	}

}

float calcularPerimetro(float ladoA, float ladoB, float ladoC) {
	float per;
	per = ladoA + ladoB + ladoC;
	return per;
}

void mostrarPerimetro(float contorno) {

	cout << " El perimetro del trinagulo es: " << contorno << endl;

}

float calcularFormulaHeron(float ladoA, float ladoB, float ladoC, float contorno) {
	float superficie;

	contorno = contorno / 2;
	superficie = sqrt(contorno * (contorno - ladoA) * (contorno - ladoB) * (contorno - ladoC));                 // con sqrt calculo la raiz de un numero

	return superficie;
}

void mostrarFormulaHeron(float superficie) {

	cout << " La superficie del triangulo es: " << superficie << endl;
}

void compararTriangulos(string nombreDelTriangulo1, string nombreDelTriangulo2, bool mensaje, bool mensaje2) {
	
	if (mensaje == true && mensaje2 == true) {
		if (nombreDelTriangulo1 == nombreDelTriangulo2) {
			cout << " Los triangulos pertenecen a la misma familia" << endl;
		}

		else {
			cout << " Estos triangulos son de una familia diferente" << endl;
		}
	}
	
}

void agradecimientos() {
	cout << " Gracias por usar stankatriangulos.com.uy " << endl;

}

void main() {

	//Definicion de variables

	float ladoA, ladoB, ladoC, contorno, superficie;
	bool mensaje,mensaje2;
	string nombreDelTriangulo1= "hola", nombreDelTriangulo2= "chau";

	//llamadas a funciones

	ladoA = tomarMedidas();
	ladoB = tomarMedidas();
	ladoC = tomarMedidas();
	mensaje = sePuedeContruir(ladoA, ladoB, ladoC);

	nombreDelTriangulo1 = equilatero(mensaje, ladoA, ladoB, ladoC);
	nombreDelTriangulo1 = isoceles(mensaje, ladoA, ladoB, ladoC, nombreDelTriangulo1);
	nombreDelTriangulo1 = escaleno(mensaje, ladoA, ladoB, ladoC, nombreDelTriangulo1);
	mostrarTipo(nombreDelTriangulo1, nombreDelTriangulo2, mensaje);

	// Superficie y Perimetro

	if (mensaje == true) {

		contorno = calcularPerimetro(ladoA, ladoB, ladoC);
		mostrarPerimetro(contorno);

		superficie = calcularFormulaHeron(ladoA, ladoB, ladoC, contorno);
		mostrarFormulaHeron(superficie);
	}
	
	ladoA = tomarMedidas();
	ladoB = tomarMedidas();
	ladoC = tomarMedidas();
	mensaje2 = sePuedeContruir(ladoA, ladoB, ladoC);

	nombreDelTriangulo2 = equilatero(mensaje2, ladoA, ladoB, ladoC);
	nombreDelTriangulo2 = isoceles(mensaje2, ladoA, ladoB, ladoC, nombreDelTriangulo2);
	nombreDelTriangulo2 = escaleno(mensaje2, ladoA, ladoB, ladoC,nombreDelTriangulo2);
	if (mensaje2 == true) {

		contorno = calcularPerimetro(ladoA, ladoB, ladoC);
		mostrarPerimetro(contorno);

		superficie = calcularFormulaHeron(ladoA, ladoB, ladoC, contorno);
		mostrarFormulaHeron(superficie);
	}
	compararTriangulos(nombreDelTriangulo1, nombreDelTriangulo2, mensaje, mensaje2);
	agradecimientos();
	system("pause");
}