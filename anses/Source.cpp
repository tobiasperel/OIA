#include<iostream>
#include<vector>
using namespace std;

string ingresarString(string mensaje, string mensaje2, int num) {
	string codigo;
	cout << mensaje << endl;
	cin >> codigo;
	while (codigo.length() != num && codigo!="999") {
		cout << mensaje2 << endl;
		cin >> codigo;
	}
	return codigo;
}
float ingresarNum(string mensaje, string mensaje2) {
	float edad;
	cout << mensaje << endl;
	cin >> edad;
	while (edad < 0) {
		cout << mensaje2 << endl;
		cin >> edad;
	}
	return edad;
}
char getCateg(string cuit) {
	char categoria;
	int total=0;

	for (int i = 0; i < cuit.length(); i++) {
		total += int(cuit[i]);
	}

	total = total % 4;
	switch(total) {
	case 0 : categoria = 'a';
		break;
	case 1: categoria = 'b';
		break;
	case 2: categoria = 'c';
		break;
	case 3: categoria = 'd';
		break;
		}
	return categoria;
}
bool afip(string cuit) {
	bool resp;
	int total = 0;
	for (int i = 0; i < cuit.length(); i++) {
		total += int(cuit[i]);
	}
	resp = (total % 2 == 0);
	return resp;
}
bool aprobado(float edad, string codigo, bool valido, char categoria, int &aprobado) {
	const float EDAD_MINIMA = 18;
	const float EDAD_MAXIMA = 65;
	bool aprobados;
	if ((categoria == 'a' || categoria == 'b') && (valido == true || codigo == "ARGEN") && EDAD_MINIMA <= edad <= EDAD_MAXIMA ) {
		aprobados = true;
		aprobado++;
	}
	else {
		aprobados = false;
	}
	return aprobados;
}
float sumarEdadDesaprobados(float edad, float edadDesaprobados) {
	edadDesaprobados += edad;
	return edadDesaprobados;
}
float calcularPorcentajeAprobados(int contador, int  exito) {
	float porcentajeAprobados = float(exito) / float(contador) * 100;
	return porcentajeAprobados;
}
void mostrarPorcentajeAprobados(float porcentajeAprobados) {
	cout << "El porcentaje de personas aprobadas es: " << porcentajeAprobados <<"%"<< endl;
}
void mostrarAprobado(bool aprobados,string mensaje1, string mensaje2) {
	if (aprobados == true) {
		cout << mensaje1 << endl;
	}
	else {
		cout << mensaje2 << endl;
	}
}
float calcularPorcentajeEdades(int contador, float edadDesaprobados,float exitos) {
	float promedio;
	if (exitos - contador == 0) {
		promedio = 0;
	}
	else {
		promedio = edadDesaprobados / float (contador);
	}
	return promedio;
}
void mostrarPromedioEdades(float promedioEdadDesaprobadas) {
	cout << "El promedio de las edades que no aprobaron es: " << promedioEdadDesaprobadas << endl;
}
int main() {
	const int CANTIDAD_CUIT = 11;
	const int CANTIDAD_ARG = 5;
	string cuit;
	float residencia = 0;
	string codigo;
	float edad = 0;
	bool valido;
	char categoria;
	int contador = 0;
	int exito = 0;
	float pocentajeAprobados = 0;
	bool aprobados;
	float edadDesaprobados = 0;
	float promedioEdadDesaprobadas = 0;
	while (cuit != "999") {
		cuit= ingresarString("Ingrese su cuit nacional:", "Error el cuit nacional debe tener 11 caracteres", CANTIDAD_CUIT);

		if (cuit != "999") {
			codigo = ingresarString("Ingrese su codigo nacional:", "Error el codigo nacional debe tener 5 caracteres", CANTIDAD_ARG);
			residencia = ingresarNum("Ingrese su años de residencia:", "Error los años de recidencia deben ser mayor a 0 ");
			edad = ingresarNum("Ingrese su edad:", "Error la edad debe ser mayor a 0 ");
			categoria = getCateg(cuit);
			valido = afip(cuit);
			contador++;
			aprobados = aprobado(edad,codigo, valido, categoria,exito);
			mostrarAprobado(aprobados,"aprobo","no aprobo");
			edadDesaprobados = sumarEdadDesaprobados(edad, edadDesaprobados);
		}

	}
	pocentajeAprobados =calcularPorcentajeAprobados(contador, exito);
	mostrarPorcentajeAprobados(pocentajeAprobados);
	promedioEdadDesaprobadas = calcularPorcentajeEdades(contador, edadDesaprobados,exito);
	mostrarPromedioEdades(promedioEdadDesaprobadas);
	system("pause");
}
