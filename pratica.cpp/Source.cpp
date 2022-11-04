#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {

	/*
	anotaciones
	vector<tipo de variable>nombre de variable ; si no le pones valor posee 0 de longitud

	cambiar longiud:

	nombre de variable.resize(largo);
	*/
	vector<int>edades;
	
	int cantidad;
	cin >> cantidad;

	edades.resize(cantidad);


	for (int i = 0; i < cantidad; i++) {
		cin >> edades[i];
	}

	cout << "procendao..." << endl;

	for (int i = 0; i < cantidad; i++) {
		cout << edades[i]<<endl;
	}

   //como hacer matriz:

	vector<vector<int>>matriz;
	int n, m;
	cin >> n >> m;

	matriz.resize(n); // Aca cambio filas

	for (int i = 0; i < n; i++) {

		matriz[i].resize(m);   //   Aca cambio las columnas

		for (int j = 0; j < m; j++) {
			cin >> matriz[i][j];
		}
	}
	
	cout << matriz[1][2] << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << matriz[i][j]<<" ";
		}
		cout << endl;
	}
}