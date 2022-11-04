#include <iostream>
#include<fstream>
#include<vector>
using namespace std;


void calculando(int menor, vector<int>masculinas,vector<int>hembra,vector<int>agresividaM, vector<int>agresividaH, 
    int &formadas,int sobrevive,int &masGrande,int &perdidas) {
    for (int i = 0; i < menor; i++) {

        if (masculinas[i] == hembra[i]) {
            formadas++;
            sobrevive++;
            if (masGrande < sobrevive) {
                masGrande = sobrevive;
            }
        }
        else {

            if (agresividaM[i] - 4 >= agresividaH[i] ||
                agresividaH[i] - 4 >= agresividaM[i]) {
                perdidas++;
                sobrevive = 0;
            }

            else {
                sobrevive++;
                if (masGrande < sobrevive) {
                    masGrande = sobrevive;
                }
            }

        }


    }
}

int main() {

    //ifstream cin("zoo.in");
    //ofstream cout("zoo.out");

    int cantidad, m, h, formadas = 0, perdidas = 0, sobrevive = 0, menor = 0,masGrande=0,dif=0;

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

    if (m < h) {
        menor = m;
        dif = h - m;
    }
    else {
        menor = h;
        dif = m - h;
    }
    
    calculando(menor, masculinas, hembra, agresividaM, agresividaH,
        formadas, sobrevive,  masGrande, perdidas);
    
   
    cout << formadas << " " << perdidas << " " << masGrande;

}