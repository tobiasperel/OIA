#include<iostream>
using namespace std;

void main() {
	char fiebre;
	
	cout << " ingrese la tecla t si tiene fiebre y la f si no tiene jeje " << endl;
	cin >> fiebre;

	if (fiebre == 't') {
		cout<<" ingrese la tecla t si tiene falta de aire y la f si no tiene" << endl;
		cin >> fiebre;

		if (fiebre == 't') {
			cout << " Podria tener corona virus" << endl;
		}

		if (fiebre == 'f') {
			cout << " Podria tener gripe" << endl;
		}
	}
	else {
		if (fiebre == 'f') {
			cout << " ingrese la tecla t si tiene los ojos irritados y la f si no los tiene" << endl;
			cin >> fiebre;
		}
		if (fiebre == 't') {
			cout << " Podria tener alergia" << endl;
		}
		if (fiebre == 'f') {
			cout << " Podria tener un resfriado comun" << endl;
		}
	}
	system("pause");

}