#include <iostream>
#include <string>
using namespace std;


int dictado(string palabra) {

    int inicial = -1;
    int final = palabra.size() - 1;

    for (int i = 0; i < palabra.size(); i++) {

        if (palabra[i] == palabra[final]) {

            if (inicial == -1) {
                inicial = i;
            }
            final--;
        }

        else if (inicial != -1) {
            i = inicial;
            inicial = -1;
            final = palabra.size() - 1;
        }
    }

    if (inicial == -1) {
        inicial = final;
    }

    return inicial;
}

int main() {

    int contador;
    string palabra;

    cin >> palabra;
    contador = dictado(palabra);

    cout << contador;

}