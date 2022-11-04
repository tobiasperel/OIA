#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {

    int n, m, k;
    string palabras[110], contador[10], palabrasV[110], palabrasA[110];
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

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            palabrasV[j] = palabras[i][j];
        }
    }
    /*
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            palabrasA[n - i - 1] = palabrasV[i][j];
        }
    }
    */
    for (int i = 0; i < k; i++) {
        for (int r = 0; r < m; r++) {
            if (r != 0) {
                palabras[i].pop_back();
               // palabrasA[i].pop_back();
                palabrasV[i].pop_back();
            }
            for (int j = 0; j < k; j++) {
                if (palabras[i] == palabrasBuscar[j] ||
                    /*palabrasA[i] == palabrasBuscar[j] ||*/
                    palabrasV[i] == palabrasBuscar[j]) {
                    contador[j] = "si";
                }
            }
        }
    }

    for (int i = 0; i < k; i++) {
        cout << contador[i] << endl;
    }


}