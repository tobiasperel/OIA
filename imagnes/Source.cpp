#include <iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

int main() {

    //ifstream cin("");
    //ofstream cout("");
    char contadorChar;
    int contador = 1, veces = 0;
    string eComprimido, eDescomprimido;
    string sComprimido, sDescomprimido;

    cin >> eDescomprimido;
    cin>>eComprimido;
    
    for (int i = 0; i < eDescomprimido.size(); i++) {

        contador = 1;

        while (eDescomprimido[i] == eDescomprimido[i + 1]) {
            contador++;
            i++;
        }

        if (contador >= 4) {
            sDescomprimido[i + 1 - contador] = '(';
            sDescomprimido[i + 1 - contador + 1] = eDescomprimido[i];
            contadorChar = (char)contador;
            sDescomprimido[i + 1 - contador + 2] = contadorChar;
            sDescomprimido[i + 1 - contador + 3] = ')';
        }

        else {
            for (int j = i; j <= i + contador - 1; j++) {
                sDescomprimido[j] = eDescomprimido[j];
            }

        }
    }

    cout << sDescomprimido << endl;

    
    for(int i=0; i<eComprimido.size();i++){

    if(eComprimido[i]!='('){
    sComprimido[i]=eComprimido[i];
    }

    if(eComprimido[i]=='(' ){

        veces = eComprimido[i + 2]-'0';

      for(int j=0;j<veces;j++){

      sComprimido[j]=eComprimido[i];

      }
    }


    }


    cout<<sComprimido<<endl;
    
}