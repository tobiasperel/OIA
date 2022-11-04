#include <iostream>
#include<vector>
using namespace std;

    int calcularFeriados(vector<bool>todos, int n, int d, int f) {

        int masGrande = f;
        int auxf = f;
        int i = 0, j=0;
 
        while ( i < d && d-i>=masGrande) {
            j = i;
            auxf = f;
            while (auxf>0 && j<d) {
                if (todos[j] == false) {
                    auxf--;
                }
                j++;
            }  
            while (j<d && todos[j] == true  ) {
                j++;
            }
            if (masGrande < j - i) {
                masGrande = j - i;
            }
            i++;
        }

        return masGrande;
    }

    int main() {
        int n, d, f, contador;
        cin >> n >> d >> f;
        vector<int>sinClase(n);
        vector<bool>todos(d, false);

        for (int i = 0; i < n; i++) {
            cin >> sinClase[i];
            todos[sinClase[i]-1] = true;
        }

        contador = calcularFeriados(todos, n, d, f);

        cout << contador;

    }