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
    int cantidad, contador = 0;
    cin >> cantidad;
    palabra.resize(cantidad);
    for (int i = 0; i < cantidad; i++) {
        cin >> palabra[i];
    }
    cin >> palabraBus;

    for (int i = 0; i <palabra.size(); i++) {
        
            for (int j = 0; j < palabraBus.size(); j++) {

                if (existe == false && i < palabra.size() ) {
                    j = 0;
                    
                }

                contador = 0;
                while (i < palabra.size() && j < palabraBus.size() && palabra[i] == palabraBus[j]) {
                    contador++;
                    i++;
                    j++;
                }

                if (contador == palabraBus.size()) {
                    cout << "SI" << endl << "I";
                    existe = true;
                }

                if (existe == false && i < palabra.size()) {
              
                    i++;

                }
            }
        
    }

    if (existe == false) {

        for (int i = palabra.size() -1; i >= 0; i--) {

            for (int j = 0; j< palabraBus.size(); j++){
                    contador = 0;
                    
                    if (existe == false && i >= 0 ) {

                        j = 0;

                    }
                    
                    while (i >= 0 && j<palabraBus.size() && palabra[i] == palabraBus[j]) {
                        contador++;
                        i--;
                        j++;
                    }

                    if (contador != 0) {
                        i++;
                    }

                    if (contador == palabraBus.size()) {
                        cout << "SI" << endl << "D";
                        existe = true;
                    }
                    
                    if (existe == false && i >= 0) {
                        i--;
                        j = 0;

                    }
                    
                }
            
        }

        if (existe == false) {
            cout << "NO";
        }

    }

}