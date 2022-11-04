#include <iostream>
#include<fstream>
#include<vector>
#include <algorithm>
using namespace std;


int main() {
    ifstream cin("maniobra.in");
    ofstream cout("maniobra.out");

    int x, y, x0, x1, x2, x3, y0, y1, y2, y3;

    cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if ((max(x0, x1) < min(x2, x3) || min(x0, x1) > max(x2, x3)) || ((max(y0, y1) < min(y2, y3) || min(y0, y1) > max(y2, y3)))) {
        cout << 0;
        return 0;
    }

    x = abs(max(min(x0, x1), min(x2, x3)) - min(max(x0, x1), max(x2, x3))) + 1;//3
    y = abs(max(min(y0, y1), min(y2, y3)) - min(max(y0, y1), max(y2, y3))) + 1; //2

    cout << x * y;
    return 0;

}