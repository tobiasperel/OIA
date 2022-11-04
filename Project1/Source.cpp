#include <bits/stdc++.h>
using namespace std;


int calcularPersonas(int d, vector<vector<int>> personas, int n) {
    int contador = 0;
    vector<int>distancias(n + 1);
    vector<bool>visitado(n + 1, false);
    queue<int>orden; // first in , first out

    visitado[1] = true;
    distancias[1] = 0;
    orden.push(1);

    while (!orden.empty()) {
        int nodo = orden.front();
        orden.pop();

        for (int i : personas[nodo]) {
            if (!visitado[i]) {
                visitado[i] = true;
                distancias[i] = distancias[nodo + 1];
                orden.push(i);
            }
        }
        visitado = vector <bool>(n + 1, false);
        while (!orden.empty()) {
            int nodo = orden.front();
            orden.pop();
            for (int i = n; i > 0; i--) {
                if (!visitado[i]) {
                    visitado[i] = true;

                }
            }
        }
    }

    return contador;
}


int main() {
    int n, m, d, cantidad;
    cin >> n >> m;
    cin >> d;
    vector<vector<int>>personas(n + 1);
    //1= erdos y n=es darwin

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        personas[a].push_back(b);
        personas[b].push_back(a);
    }
    cantidad = calcularPersonas(d, personas, n);
}