#include <iostream>
using namespace std;
int main() {

    int n, m, x[100][100], sumaTotal = 0, masGrande = 0, cantidad = 1;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> x[i][j];
            cantidad++;
        }
    }



    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {
            sumaTotal = 0;
            for (int k = 0; k < n; k++) {
                for (int f = 0; f< m; f++) {
                    sumaTotal = sumaTotal + x[i + k][j + f];
                    if (masGrande < sumaTotal) {
                        masGrande = sumaTotal;
                    }
                }
            }
        }
    }


    cout << masGrande;
}