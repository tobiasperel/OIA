#include <iostream>
#include <string>
using namespace std;

string procesaPalabra(int tamaño, string palabra) {
    for (int i = 0; i < tamaño; i++) {
        if (palabra[i] == 'A') {
            palabra[i] = 'B';
        }

    }
    palabra[tamaño - 1] = ' ';
    return palabra;
}

int main() {

    string palabra;
    int tamaño;

    cin >> palabra;
    tamaño = palabra.size();
    palabra = procesaPalabra(tamaño, palabra);

    cout << palabra;
}