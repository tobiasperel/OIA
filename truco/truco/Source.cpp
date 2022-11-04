#include <iostream>
#include<vector>
#include <fstream>
#include<sstream>
using namespace std;

int main() {

    int n, contador = 0;
    vector<bool>verificador;

    vector<string>cartas;
    cartas.resize(80);

    vector<int>equipoReyes;


    cin >> n;

    equipoReyes.resize(n / 2);
    verificador.resize(n);

    for (int i = 0; i < n; i++) {
        verificador[i] = false;
    }


    for (int i = 0; i < 80; i++) {

        cin >> cartas[i];

        if (cartas[i] == "12") {
            equipoReyes[contador] = ( (i / 2) + 1 ) % (n - contador) ;
            verificador[ (i / 2)  % (n - contador) ] = true ;
            contador++;
        }

    }


    for (int i = 0; i < n / 2; i++) {
        cout << equipoReyes[i] << " ";

    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        if (verificador[i] == false) {
            cout << i + 1 << " ";
        }

    }


}