#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {

    int n, m, k;
    string palabras[110], contador[10];
    string palabrasBuscar[10];
    cin >> n >> m >> k;


    for (int i = 0; i < n; i++) {
        cin >> palabras[i];
    }

    for (int i = 0; i < k; i++) {
        cin >> palabrasBuscar[i];
    }

    for (int i = 0; i < k; i++) {
        contador[i] = "NO";
    }
    for (int r = 0; r < k; r++) {
        for (int i = 0; i < n; i++) {
            int p = 0;
            for (int j = 0; j < m; j++) {
                if (palabras[i][j] == palabrasBuscar[k][p]) {
                    p++;
                }
                else {
                    p = 0;
                    if (palabras[i][j] == palabrasBuscar[k][p]) {
                        p++;
                    }
                }
                if (p + 1 == m) {
                    contador[k] = "SI";
                    break;
                }

            }
        }

    }



    for (int i = 0; i < k; i++) {
        cout << contador[i] << endl;
    }
}