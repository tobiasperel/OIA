#include <iostream>
#include <string>
using namespace std;

string procesaPalabra(int tama�o, string palabra) {
    for (int i = 0; i < tama�o; i++) {
        if (palabra[i] == 'A') {
            palabra[i] = 'B';
        }

    }
    palabra[tama�o - 1] = ' ';
    return palabra;
}

int main() {

    string palabra;
    int tama�o;

    cin >> palabra;
    tama�o = palabra.size();
    palabra = procesaPalabra(tama�o, palabra);

    cout << palabra;
}