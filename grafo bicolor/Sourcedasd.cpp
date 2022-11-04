#include<iostream>
#include<vector>
#include<queue>
using namespace std;

bool bicolor(vector<vector<int>>grafo, int n) {
    bool posible = true;

    vector<bool>visitado(n + 1, false);
    vector<int>color(n + 1, 2);
    queue<int>orden;

    visitado[1] = true;
    orden.push(0);
    color[1] = 0;

    while (posible == true && !orden.empty()) {
        int nodo = orden.front();
        orden.pop();
        for (int i : grafo[nodo]) { 
            if (!visitado[i]) {
                visitado[i] = true;
                if (color[nodo] == 0) {
                    color[i] = 1;
                }
                else {
                    color[i] = 0;
                }
                orden.push(i);
            }
            for (int r : grafo[i]) {
                if (color[i] == color[r]) {
                    posible = false;
                }
            }
        }
        }

    return posible;
}

int main() {
    bool posible;
    int n, m;
    cin >> n >> m;
    vector<vector<int>>grafo(n + 1);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }
    posible = bicolor(grafo, n);
    cout << posible;
}