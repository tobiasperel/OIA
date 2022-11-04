#include <iostream>
using namespace std;

int main() {
    int n, j, primos[1000], veces = 0, x[1000], sumaPrimos = 0;
    bool esPrimo = true;

    for (int i = 0; i < 1000; i++) {
        primos[i]=0;
    }

    for (int i = 1; i <= 1000; i++) {
        j = 1;
        esPrimo = true;
        for (int j = 1; j < i; j++) {
            if (i % j == 0 && j != 1) {
                esPrimo = false;
            }

        }
        if (esPrimo != false && i != 1) {
            primos[veces]=i;
            veces++;
        }
    }
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k <= veces; k++) {
                if (x[i] + x[j] == primos[k] && i != j) {
                    sumaPrimos++;
                }
            }
        }
    }
    sumaPrimos = sumaPrimos / 2;
    cout << sumaPrimos;

}