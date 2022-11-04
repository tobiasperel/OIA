#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

string ingresarString(string mensaje,string mensaje2) {
	string codigo;
	cout << mensaje << endl;
	cin >> codigo;
	while (codigo.length() != 5) {
		cout << mensaje2 <<endl<<mensaje<<endl;
		cin >> codigo;
	}
	return codigo;
}

int ingresarEntero(string mensaje) {
	int entero;
	cout << mensaje << endl;
	cin >> entero;
	return entero;
}

int abono(string codigo) {
	int numero;
	numero = 1 + rand() % (4 - 1);
	return numero;
}

int calcularPrecio1(int duracion) {
	int total = 0;
	const int PRECIO_POR_MINUTO = 2;
	total = duracion * PRECIO_POR_MINUTO;
	return total;
}

float calcularPrecio2(int duracion) {
	float total = 0;
	const float PRECIO_POR_MINUTO_MENOR_A_5 = 2;
	const float PRECIO_POR_MINUTO_MAYOR_A_5 = 1.5;

	if (duracion <= 5) {
		total = duracion * PRECIO_POR_MINUTO_MENOR_A_5;
	}
	else {
		total = duracion * PRECIO_POR_MINUTO_MAYOR_A_5;
	}
	
	return total;
}
int calcularPrecio3(int duracion) {
	const int PRECIO_MAXIMO = 10;
	float total = 0;
	if (duracion > 10) {
		total = PRECIO_MAXIMO;
	}
	else {
		total = duracion;
	}
	return total;
}

void mostrarPrecio(float precioLlamda,string mensaje) {
	cout <<mensaje<< precioLlamda << endl;
}
string calcularMasGrande(int duracion,int &mayor,string codigo,string codigoMasLargo) {
	if (mayor < duracion) {
		mayor = duracion;
		codigoMasLargo = codigo;
	}
	return codigoMasLargo;
}
int menorA6Min(int contador, int duracion) {
	const int TIEMPO_MAXIMO = 6;
	if (duracion < TIEMPO_MAXIMO) {
		contador++;
	}
	return contador;
}
void mostrarMayor(string codigoMasLargo,string mensaje) {
	cout << mensaje << codigoMasLargo << endl;

}
void mostrarAbono(int abono, string mensaje) {
	cout << mensaje << abono << endl;
}
void mostrarContador(int contador, string mensaje) {
	cout << mensaje << contador << endl;
}

void main() {
	srand(time(NULL));
	string codigo,stringMayor;
	int numeroAbono,duracion,mayor,contador=0;
	float recaudacion1 = 0, recaudacion2 = 0, recaudacion3 = 0,precioLlamda;

	while (codigo != "*") {
		codigo = ingresarString(" Ingrese le codigo del cliente: ", "Error codigo no posee 5 carteres");

		if (codigo != "*") {
			duracion = ingresarEntero(" Ingrese la duracion de la llamada: ");
			numeroAbono = abono(codigo);

			if (numeroAbono == 1) {
				precioLlamda = calcularPrecio1(duracion);
				recaudacion1 += precioLlamda;
				mostrarPrecio(precioLlamda, "El precio de la llamada fue: ");
				stringMayor = calcularMasGrande(duracion, mayor, codigo, stringMayor);
				contador = menorA6Min(contador, duracion);
			}

			if (numeroAbono == 2) {
				precioLlamda= calcularPrecio2(duracion);
				recaudacion2 += precioLlamda;
				mostrarPrecio(precioLlamda, "El precio de la llamada fue: ");
				stringMayor = calcularMasGrande(duracion, mayor,codigo,stringMayor);
				contador = menorA6Min(contador, duracion);
			}

			if(numeroAbono==3) {
				precioLlamda = calcularPrecio2(duracion);
				recaudacion3 += precioLlamda;
				mostrarPrecio(precioLlamda, "El precio de la llamada fue: ");
				stringMayor = calcularMasGrande(duracion, mayor,codigo,stringMayor);
				contador = menorA6Min(contador, duracion);
			}
		}

	}
	mostrarAbono(recaudacion1, "El importe recaudado por el abono 1 fue: ");
	mostrarAbono(recaudacion2, "El importe recaudado por el abono 2 fue: ");
	mostrarAbono(recaudacion3, "El importe recaudado por el abono 3 fue: ");
	mostrarMayor(stringMayor, "La persona que tuvo la llamada mas larga fue: ");
	mostrarContador(contador, "La cantidad de personas que no excedieron los 6 minutos fueron: ");

	system("pause");
}