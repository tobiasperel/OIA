#include <iostream>
#include<vector>
#include<queue>
using namespace std;


vector<int> calcularPersonas(int d, vector<vector<int>> personas, int n, int s) {

    vector<int>distancias(n + 1, -1);
    vector<bool>visitado(n + 1, false);
    queue<int>orden; // first in , first out

    visitado[s] = true;
    distancias[s] = 0;
    orden.push(s);

    while (!orden.empty()) {
        int nodo = orden.front();
        orden.pop();
        for (int i : personas[nodo]) {
            if (!visitado[i]) {
                visitado[i] = true;
                distancias[i] = distancias[nodo] +1 ;
                orden.push(i);
            }
        }
    }
    return distancias;
}


int main() {
    int n, m, d, cantidad=0;
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

    vector<int>distanciaErdos= calcularPersonas (d, personas, n, 1);
    vector<int>distanciaDarwin = calcularPersonas(d, personas, n, n);
    
    for (int i = 1; i < n+1; i++) {
        if (distanciaDarwin[i] != -1 && distanciaErdos[i] != -1 && distanciaErdos[i] + distanciaDarwin[i] <= d) {
            cantidad++;
        }
    }

    cout << cantidad;
    
}