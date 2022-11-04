#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {

	int n, veces[50], masRepetido = 0, masLargo = 0, nuevo = 0; 
	string nombres[50],aux[50], repetido,nombreLargo;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> nombres[i];

	}
	for (int i = 0; i < n; i++) {
		aux[i]= nombres[i];

	}
	for (int i = 0; i < n; i++) {
		veces[i] = 0;

	}
	for (int i = 0; i < n; i++) {
		
		for (int j = 0; j < n; j++) {
			if (nombres[i]==aux[j]) {
				veces[i]++;
			}

		}
		
	}
	for (int i = 0; i < n; i++) {
		nuevo = 0;
		nuevo = nombres[i].size();
        
		if(masLargo<nuevo){
			masLargo = nuevo;
			nombreLargo = nombres[i];
		}
	}
	cout << nombreLargo << endl;
	for (int i = 0; i <= n; i++) {

		if (masRepetido < veces[i]) {
			masRepetido = veces[i];
			repetido = nombres[i];
		}

	}
	cout << repetido << endl;	
}
