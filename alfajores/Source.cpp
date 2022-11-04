#include<iostream>
#include<string.h>
using namespace std; 

float pedirRadio() {

	float radio;
	cout << " Ingrese el radio del alfajor: " << endl;
	cin >> radio;
	return radio;
}

bool validarTamaño(float radio, float TAMAÑO_RADIO_MINIMO,float  TAMAÑO_RADIO_MAXIMO) {

	bool validarAlfajor;

	if (radio >= TAMAÑO_RADIO_MINIMO && radio <= TAMAÑO_RADIO_MAXIMO) {
		validarAlfajor = true;
	}
	else {
		validarAlfajor = false;
	}

	return validarAlfajor;
}

string tipoDeAlfajor() {
	
	string tipo;
	cout << "Ingrese el tipo de alfajor "<< endl;
	cin >> tipo; 
	
	return tipo;
}

bool vericacionDeTipoDeAlfajor(string tipoAlfajor) {

	bool tipoExiste;

	if (tipoAlfajor == "SIMPLE"|| tipoAlfajor == "simple" || tipoAlfajor == "doble" || tipoAlfajor == "DOBLE" || tipoAlfajor == "TRIPLE" || tipoAlfajor == "triple") {
		tipoExiste = true;
	}
	else {
		tipoExiste = false;
	}
	return tipoExiste;
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
float asignarValorFijoDoble (string tipoAlfajor, float PRECIO_FIJO_DOBLE, float precioTipoAlfajor) {
	float precioFijo;

	if (tipoAlfajor == "doble" || tipoAlfajor == "DOBLE") {
		precioFijo = PRECIO_FIJO_DOBLE;
	}
	else {
		precioFijo = precioTipoAlfajor;
	}
	return precioFijo;
}

float asignarValorFijoTriple(string tipoAlfajor, float PRECIO_FIJO_TRIPLE,float precioTipoAlfajor) {
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
	precioVenta = precioTipoAlfajor + (diametro* VALOR_BASE);

	return precioVenta;
}

void mostrarPrecioVenta(float precioVenta) {
	
	cout << "el precio de venta es: " << precioVenta << endl;

}

void tipoDeAlfajorIncorrecto() {

	cout << " Error de tipo de alfajor " << endl;
}

void radioIncorrecto() {
	cout << " Alfajor desechado " << endl;
}

void main() {
	
	const float TAMAÑO_RADIO_MINIMO = 3;
	const float TAMAÑO_RADIO_MAXIMO = 5;
	const float PRECIO_FIJO_SIMPLE = 10;
	const float PRECIO_FIJO_DOBLE = 15;
	const float PRECIO_FIJO_TRIPLE = 20;
	const float VALOR_BASE = 5;
    float radio, precioFijo,precioTipoAlfajor=1,precioVenta;
	bool sePuede,tipoExiste;
	string tipoAlfajor;
	radio = pedirRadio();
	sePuede= validarTamaño(radio,TAMAÑO_RADIO_MINIMO, TAMAÑO_RADIO_MAXIMO);

	if (sePuede == true) {
		tipoAlfajor = tipoDeAlfajor();
	
		tipoExiste= vericacionDeTipoDeAlfajor(tipoAlfajor);

		if (tipoExiste == true) {
			precioTipoAlfajor = asignarValorFijoSimple(tipoAlfajor, PRECIO_FIJO_SIMPLE, precioTipoAlfajor);
			precioTipoAlfajor = asignarValorFijoDoble(tipoAlfajor, PRECIO_FIJO_DOBLE, precioTipoAlfajor);
			precioTipoAlfajor = asignarValorFijoTriple(tipoAlfajor, PRECIO_FIJO_TRIPLE,	precioTipoAlfajor);
			precioVenta = calcularPrecioVenta(radio,  precioTipoAlfajor, VALOR_BASE);
			mostrarPrecioVenta(precioVenta);
		}
		else {
			tipoDeAlfajorIncorrecto();
		}
	}
	else {
		radioIncorrecto();
	}
	system("pause"); 
}