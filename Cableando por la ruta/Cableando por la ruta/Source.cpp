#include <iostream>
#include<vector>
#include<array>
using namespace std;


int main() {

    int n, k, *cantPue=NULL, masGrande = 0, masChico, cantidadDeCable;
    cin >> n;
    cin >> k;

    //cantPue.resize(n);
    cantPue = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        cin >> cantPue[i];

    }
    masChico = cantPue[0];

    for (int i = 0; i < n; i++) {

        if (masGrande < cantPue[i]) {
            masGrande = cantPue[i];
        }

        if (masChico > cantPue[i]) {
            masChico = cantPue[i];
        }

    }
    if (masGrande < k) {
        masGrande = k;
    }
    if (masChico > k) {
        masChico = k;
    }
    cantidadDeCable = masGrande - masChico;
    cout << cantidadDeCable;
}