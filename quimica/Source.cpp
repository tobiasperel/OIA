#include <iostream>
using namespace std;


int main() {
    int h, m, s, d, total;

    cin >> h >> m >> s;
    cin >> d;

    m = m * 60;
    h = h * 60 * 60;
    total = s + m + h + d;

    
    s = total % 60;
    m = total / 60;
    m = m % 60;
    h = total / 3600;
    h = h % 24;

    cout << h << " " << m << " " << s;

    system("pause");
}