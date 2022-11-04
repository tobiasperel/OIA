#include<iostream>
#include<string.h>

using namespace std;

float pedirRadio(string mensaje) {

	float radio;
	cout << mensaje << endl;
	cin >> radio;
	return radio;
}

void mostrarMensaje(string mensaje) {

	cout << mensaje << endl;

}

float validarTamano(float radio, float TAMAnO_RADIO_MINIMO, float  TAMAnO_RADIO_MAXIMO, string mensaje, string mensaje2) {

	bool validarAlfajor = false;

	if (radio >= TAMAnO_RADIO_MINIMO && radio <= TAMAnO_RADIO_MAXIMO) {
		validarAlfajor = true;
	}

	while (validarAlfajor == false) {
		mostrarMensaje(mensaje);
		radio = pedirRadio(mensaje2);
		if (radio >= TAMAnO_RADIO_MINIMO && radio <= TAMAnO_RADIO_MAXIMO) {
			validarAlfajor = true;
		}
	}

	return radio;
}

string tipoDeAlfajor(string mensaje) {

	string tipo;
	cout << mensaje << endl;
	cin >> tipo;

	return tipo;
}

string verificacionDeTipoDeAlfajor(string tipoAlfajor, string mensaje, string mensaje2) {

	bool tipoExiste = false;

	if (tipoAlfajor == "SIMPLE" || tipoAlfajor == "simple" || tipoAlfajor == "doble" || tipoAlfajor == "DOBLE" || tipoAlfajor == "TRIPLE" || tipoAlfajor == "triple") {
		tipoExiste = true;
	}
	while (tipoExiste == false) {
		mostrarMensaje(mensaje);
		tipoAlfajor=tipoDeAlfajor(mensaje2);

		if (tipoAlfajor == "SIMPLE" || tipoAlfajor == "simple" || tipoAlfajor == "doble" || tipoAlfajor == "DOBLE" || tipoAlfajor == "TRIPLE" || tipoAlfajor == "triple") {
			tipoExiste = true;
		}
	}

	return tipoAlfajor ;
}

float asignarValorFijoSimple(string tipoAlfajor, float PRECIO_FIJO_SIMPLE, float precioTipoAlfajor) {
	float precioFijo;

	if (tipoAlfajor == "SIMPLE" || tipoAlfajor == "simple") {
		precioFijo = PRECIO_FIJO_SIMPLE;
	}
	else {
		precioFijo = precioTipoAlfajor;
	}
	return precioFijo;
}

float asignarValorFijoDoble(string tipoAlfajor, float PRECIO_FIJO_DOBLE, float precioTipoAlfajor) {
	float precioFijo;

	if (tipoAlfajor == "doble" || tipoAlfajor == "DOBLE") {
		precioFijo = PRECIO_FIJO_DOBLE;
	}
	else {
		precioFijo = precioTipoAlfajor;
	}
	return precioFijo;
}

float asignarValorFijoTriple(string tipoAlfajor, float PRECIO_FIJO_TRIPLE, float precioTipoAlfajor) {
	float precioFijo;

	if (tipoAlfajor == "TRIPLE" || tipoAlfajor == "triple") {
		precioFijo = PRECIO_FIJO_TRIPLE;
	}
	else {
		precioFijo = precioTipoAlfajor;
	}
	return precioFijo;
}

float calcularPrecioVenta(float radio, float precioTipoAlfajor, float VALOR_BASE) {
	float precioVenta;
	float diametro;
	diametro = radio * 2;
	precioVenta = precioTipoAlfajor + (diametro * VALOR_BASE);

	return precioVenta;
}

void mostrarPrecioVenta(float precioVenta) {

	cout << "el precio de venta es: " << precioVenta << endl;

}

int main() {

	const float TAMAnO_RADIO_MINIMO = 3;
	const float TAMAnO_RADIO_MAXIMO = 5;
	const float PRECIO_FIJO_SIMPLE = 10;
	const float PRECIO_FIJO_DOBLE = 15;
	const float PRECIO_FIJO_TRIPLE = 20;
	const float VALOR_BASE = 5;
	float radio, precioTipoAlfajor = 1, precioVenta;
	string tipoAlfajor;

	radio = pedirRadio(" Ingrese el radio del alfajor : ");
	radio = validarTamano(radio, TAMAnO_RADIO_MINIMO, TAMAnO_RADIO_MAXIMO, "El radio debe estar entre 3 y 5 cm", " Ingrese el radio del alfajor : ");
	tipoAlfajor = tipoDeAlfajor("Ingrese el tipo de alfajor");
	tipoAlfajor = verificacionDeTipoDeAlfajor(tipoAlfajor, " Tipo de alfajor no valido ", "Ingrese el tipo de alfajor");


	precioTipoAlfajor = asignarValorFijoSimple(tipoAlfajor, PRECIO_FIJO_SIMPLE, precioTipoAlfajor);
	precioTipoAlfajor = asignarValorFijoDoble(tipoAlfajor, PRECIO_FIJO_DOBLE, precioTipoAlfajor);
	precioTipoAlfajor = asignarValorFijoTriple(tipoAlfajor, PRECIO_FIJO_TRIPLE, precioTipoAlfajor);
	precioVenta = calcularPrecioVenta(radio, precioTipoAlfajor, VALOR_BASE);
	mostrarPrecioVenta(precioVenta);



	system("pause");
	return 0;
}