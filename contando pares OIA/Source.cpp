#include <iostream>
using namespace std;
int main() {

    int n, x[100], veces = 0,suma=0;

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            suma = x[i] + x[j];
            suma = suma % 10;
            if ( suma == 0 && i != j) {
                veces++;
            }
        }
    }
    veces = veces / 2; // se divide entre dos ya que cada numero 
    //lo estas repitiendo en en i y en j. Por eso la cantidad de parejas vaa ser el doble de las reales
    cout << veces;

}