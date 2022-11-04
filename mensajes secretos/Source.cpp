#include <iostream>
#include<fstream>
#include<vector>
using namespace std;

int main() {

    //ifstream cin("mensajes.in");
    //ofstream cout("mensajes.out");
    bool existe = false;
    vector<char>palabra;
    palabra.resize(100);
    string palabraBus;
    int cantidad, contador = 0;;
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        cin >> palabra[i];
    }
    cin >> palabraBus;

    for (int i = 0; i < palabra.size(); i++) {
        for (int j = 0; j < palabraBus.size(); j++) {
            contador = 0;
            while (palabra[i] == palabra[j]) {
                contador++;

            }
            if (contador == palabraBus.size()) {
                cout << "SI" << endl << "I";
                existe = true;
            }

        }
    }
    for (int i = palabra.size(); i > 0; i--) {
        for (int j = palabraBus.size(); j > 0; j--) {
            contador = 0;
            while (palabra[i] == palabra[j]) {
                contador++;

            }
            if (contador == palabraBus.size()) {
                cout << "SI" << endl << "D";
                existe = true;
            }

        }
    }
    if (existe == false) {
        cout << "NO";
    }
    /*
    for(int i=0; i<palabra.size();i++){
     cout<<palabra[i];
    }
    cout<<endl<<palabraBus;
    */
    return 0;   
}