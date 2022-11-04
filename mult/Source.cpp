#include<iostream>
using namespace std;

int pedirNum(int n) {
	n = n % 2;
	return n;
}
int salir(int salir) {
	if (salir == 0) {
		cout << " Usted puede salir los dias: lunes, miercoles, viernes y domingo" << endl;
	}
	else {
		cout << " Usted puede salir los dias: lunes, miercoles, viernes y domingo" << endl << endl;
	}
	return salir;
}
void main() {
	int num;

	cout << "Ingrese su dni" << endl;
	cin >> num;
	num = pedirNum(num);
	system("cls");
	num = salir(num);
	
	system("pause");
}