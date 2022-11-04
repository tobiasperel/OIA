#include <iostream>
using namespace std;

int main() {
    int n, j;
    bool esPrimo=true;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        j = 1;
        esPrimo = true;
        for (int j = 1; j < i; j++) {
            if (i % j == 0 && j != 1) {
                esPrimo = false;
            }

        }
        if (esPrimo != false && i!=1) {
            cout << i << endl;
        }
    }
}