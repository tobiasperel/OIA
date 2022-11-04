#include <iostream>
using namespace std;

int main() {

    int n, x[1000], aux[1000], aux2[1000], veces = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {

        cin >> x[i];

    }
    for (int i = 0; i < n; i++) {
        aux[i] = x[i];
    }
    for (int i = 0; i < n; i++) {
        aux2[i] = x[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int g = 0; g < n; g++) {
                if (x[i] + aux[j] > aux2[g] && i != j && j != g && g != i) {
                    veces++;
                }
                }
        }
    }

    cout << veces;

}
