#include<iostream>
#include<string.h>
using namespace std;

float ingreseHora() {
	float hora;
	cout << " Ingrese la hora que quiere estacionar: " << endl;
	cin >> hora;
	return hora;
}

bool horaPosible(float hora,const int HORA_MINIMA, const int HORA_MAXIMA,const int HORA_0, const int HORA_24) {
	bool estaAbierto;

	if (hora >= HORA_MINIMA && hora <= HORA_MAXIMA) {
		estaAbierto = true;
	}
	if (HORA_0 <= hora && hora  > HORA_MINIMA || HORA_24 > hora && hora < HORA_MAXIMA) {
		estaAbierto = false;
	}
	else {
		cout << "Ha ingresado una hora incorrecta - ESTACIONAMIENTO BRUSELAS " <<endl;

	}
	
	return estaAbierto;
}
string calcularPosbile(bool estaAbierto) {
	string posible;
	if (estaAbierto == true) {
		posible = "abierto";

	}
	if (estaAbierto == false) {
		posible = "cerrado";

	}
	return posible;
}

void mostrarPosible(string puedeEstacionar) {
	cout << " El estacionamiento BRUSELAS esta: " << puedeEstacionar;
}

void mostrarHorarios() {
	cout << " Los horarios de Bruselas son: 10-18hrs " <<endl;

}

void main() {
	const int HORA_MINIMA = 10;
	const int HORA_MAXIMA = 18;
	const int HORA_0 = 0;
	const int HORA_24 = 24;
	float hora;
	bool estaAbierto;
	string puedeEstacionar;

	hora = ingreseHora();
	estaAbierto = horaPosible( hora , HORA_MINIMA , HORA_MAXIMA , HORA_0 , HORA_24 );
	puedeEstacionar=calcularPosbile(estaAbierto);
	mostrarHorarios();
	system("pause");
}