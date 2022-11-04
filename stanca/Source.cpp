#include<iostream>
#include<string>
using namespace std;

string ingresarPalabra() {
	string palabra;
	cout << " Ingrese el nombre del producto: "<<endl;
	cin >> palabra;
	return palabra;
}

float ingresarNumeroReal(string mensaje) {
	float numeroReal;
	cout << mensaje << endl;
	cin >> numeroReal;
	return numeroReal;
}

char elegirOpcion(string mensaje) {
	char letra;
	cout << mensaje << endl;
	cin >> letra;
	letra= toupper (letra) ; //pasa letra a mayuscula

	return letra;
}

float obtenerDescuento(float precioUnid, float cant, char pago,float precioTotal) {
	float desc;
	if (pago == 'E') {
		if (cant > 5) {
			desc = 0.9;
		}
		else {
			desc = 0.95;
		}

	}
	else  {
		if (precioUnid > 1000) {
			desc = 0.85;
				
		}
		else{
			desc = 1;
		}

	}
	return desc;
}

float realizarDescuento(float precioTotal, float porcentajeDeDescuento) {
	precioTotal = precioTotal * porcentajeDeDescuento;
	return precioTotal;
}

float mostrarPrecio(float precioTotal) {
	cout << "su gasto total es: " << precioTotal << endl;

	return precioTotal;
}

void main() {
	string producto;
	float precioUnid,precioTotal,cant,porcentajeDeDescuento;
    char pago;

	producto = ingresarPalabra();

	precioUnid = ingresarNumeroReal("Ingresa precio unitario de : " + producto);

	cant = ingresarNumeroReal( "Ingresa la cantidad : " + producto );

	pago = elegirOpcion("Ingrese la letra E para pagar en efectivo y la letra T para pagar con tarjeta: ");

	precioTotal = cant * precioUnid;

	porcentajeDeDescuento = obtenerDescuento(precioUnid, cant, pago, precioTotal);

	precioTotal = precioTotal * porcentajeDeDescuento;
	cout << " su gasto es: " << precioTotal;

	system("pause");
}