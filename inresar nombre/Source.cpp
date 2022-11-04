#include<iostream>
using namespace std;

string ingresarString(string mensaje) {
	string nombre;
	cout << mensaje << endl;
	cin >> nombre;

	return nombre;
}

int ingresarEntero(string mensaje,string mensaje2) {
	int nota;
	cout << mensaje<<endl;
	cin >> nota;
	while (nota < 1 || nota>10) {
		cout << mensaje2<<endl;
		cin >> nota;
	}
	return nota;
}
void calcularDatos(float &promedio, int &mayor,string &nerd){

	string nombre="";
	int nota=0,contador=0;
	int total = 0;

	while (nombre != "zzz") {
		nombre = ingresarString("ingrese su nombre: ");
		if (nombre != "zzz") {
			nota = ingresarEntero("ingrese su nota: ", "La nota debe estar entre 1 y 10 ");

			if (mayor < nota) {
				mayor = nota;
				nerd = nombre;
			}
			total += nota;
			contador++;
		}
	}
	if (contador != 0) {
		promedio = total / contador;
	 }
	else {
		promedio = 0;
	}
	
}
void mostrarPromedio(float promedio,string mensaje) {
	cout << mensaje<<promedio<<endl;

}
void mostrarMayor(int mayor, string mensaje,string mensaje2,string nerd) {
	cout << mensaje<<nerd<<mensaje2 <<mayor<< endl;

}

void main() {
	float promedio = 0;
	int mayor = 0;
	string nerd;
	calcularDatos(promedio, mayor,nerd);
	system("cls");
	mostrarPromedio(promedio, "El promedio de los alumnos es: ");
	mostrarMayor(mayor, "El alumno "," obtuvo la mayor nota, la cual fue: ",nerd );

	system("pause");

}