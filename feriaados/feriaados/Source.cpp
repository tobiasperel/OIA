#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int calcularFeriados(vector<bool>todos, int n, int d, int f) {

    int maximo = 1, dia = 1, faltasRestantes =f - 1, largo = 1;
    if (todos[1] == true) {
        faltasRestantes++;
    }

    while (dia + largo <= d) {
        if (todos[dia + largo] == true) {
            largo++;
        }
        else if (faltasRestantes > 0) {
            faltasRestantes--;
            largo++;
        }
        else {
            if (todos[dia] == true) {
                dia++;
                largo--;
            }
            else {
                dia++;
            }
        }
        maximo = max(maximo, largo);
    }
    return maximo;
}


int main() {

    int n, d, f, contador;
    cin >> n >> d >> f;
    int sinClase;
    vector<bool>todos(d+1, false);

    for (int i = 0; i < n; i++) {
        cin >> sinClase;
        todos[sinClase - 1] = true;
    }

    contador = calcularFeriados(todos, n, d, f);

    cout << contador;

}