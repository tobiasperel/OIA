#include <iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;

int main() {

    //ifstream cin("colgantes.in");
   // ofstream cout("colgantes.out");

    int cantidad, suma = 0, peso = 0;
    vector<int>colgantes;
    cin >> cantidad;
    colgantes.resize(cantidad);

    for (int i = 0; i < cantidad; i++) {
        cin >> colgantes[i];
    }
    for (int i = 0; i < cantidad; i++) {
        for (int j = 0; j < cantidad; j++) {
            if (colgantes[i] == colgantes[j]) {
                suma++;
                peso += colgantes[i];
            }
        }
    }
    suma /= 2;

    cout << peso << " " << suma;

}