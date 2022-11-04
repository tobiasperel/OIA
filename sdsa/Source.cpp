#include <vector>
#include<iostream>
using namespace std;

void procesaMatriz(vector<vector<int> > matriz, vector<long long>& resultadoEnArreglo, vector<vector<long long> >& resultadoEnMatriz)
{

    int n = matriz.size();
    int m = matriz[0].size();
    long long suma = 0, prod = 1, grande = matriz[0][0], minimo = matriz[0][0];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            suma += matriz[i][j];
            prod *= matriz[i][j];

            if (matriz[i][j] > grande) {
                grande = matriz[i][j];
            }
            if (matriz[i][j] < minimo) {
                minimo = matriz[i][j];
            }
        }
    }

    resultadoEnArreglo.resize(4);
   
    resultadoEnArreglo[0] = suma;
    resultadoEnArreglo[1] = prod;
    resultadoEnArreglo[2] = grande;
    resultadoEnArreglo[3] = minimo;

    resultadoEnMatriz.resize(4);
    resultadoEnMatriz[0].resize(4);
    resultadoEnMatriz[1].resize(4);
    resultadoEnMatriz[0][0] = suma;
    resultadoEnMatriz[0][1] = prod;
    resultadoEnMatriz[1][0] = grande;
    resultadoEnMatriz[1][1] = minimo;

}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int> > matriz;
    matriz.resize(n);
    for (int i = 0; i < n; i++)
    {
        matriz[i].resize(m);
        for (int j = 0; j < m; j++)
            cin >> matriz[i][j];
    }
    
    vector<long long> resultadoEnArreglo;
    vector<vector<long long> > resultadoEnMatriz;
    procesaMatriz(matriz, resultadoEnArreglo, resultadoEnMatriz);
    for (int i = 0; i<int(resultadoEnArreglo.size()); i++)
    {
        if (i > 0) cout << " ";
        cout << resultadoEnArreglo[i];
    }
    cout << endl;
    cout << resultadoEnMatriz[0][0] << " " <<
        resultadoEnMatriz[0][1] << " " <<
        resultadoEnMatriz[1][0] << " " <<
        resultadoEnMatriz[1][1] << endl;
    return 0;
}
