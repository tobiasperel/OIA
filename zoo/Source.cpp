#include <iostream>
#include<fstream>
#include<vector>
using namespace std;



int main() {

    //ifstream cin("zoo.in");
    //ofstream cout("zoo.out");

    int cantidad, m, h, formadas = 0, perdidas = 0, sobrevive = 0, mayor = 0;

    cin >> cantidad >> m >> h;
    vector<int>codigo(cantidad);
    vector<int>agresividad(cantidad);

    vector<int>agresividaM(m);
    vector<int>agresividaH(h);

    for (int i = 0; i < cantidad; i++) {
        cin >> codigo[i] >> agresividad[i];
    }

    vector<int>masculinas(m);
    vector<int>hembra(h);


    for (int i = 0; i < m; i++) {
        cin >> masculinas[i];

        for (int j = 0; j < cantidad; j++) {
            if (masculinas[i] == codigo[j]) {
                agresividaM[i] = agresividad[j];
            }

        }

    }

    for (int i = 0; i < h; i++) {
        cin >> hembra[i];

        for (int j = 0; j < cantidad; j++) {
            if (hembra[i] == codigo[j]) {
                agresividaH[i] = agresividad[j];
            }

        }
    }

    if (m > h) {
        mayor = m;
    }
    else {
        mayor = h;
    }

    for (int i = 0; i < mayor; i++) {

        if (masculinas[i] == hembra[i]) {
            formadas++;
        }
        else {

            if (agresividaM[i] + 3 > agresividaH[i] ||
                agresividaH[i] + 3 > agresividaH[i]) {
                perdidas++;
            }

            else {
                sobrevive++;
            }

        }


    }

    cout << formadas << " " << perdidas << " " << sobrevive;

}