#include <iostream>
using namespace std;
int main() {

    int x[100][100], n, m, suma = 0;

    cin >> n >> m;
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            cin >> x[i][j];
        }
    }
   
    for (int j = 0; j < m; j++) {
        suma = 0;
        for (int i = 0; i < n; i++) {
            suma = suma + x[i][j];

        }
        cout << suma << " ";
    }
    cout << endl;
    for (int j = 0; j < n; j++) {
        suma = 0;
        for (int i = 0; i < m; i++) {
            suma = suma + x[j][i];

        }
        cout << suma << " ";
    }
}