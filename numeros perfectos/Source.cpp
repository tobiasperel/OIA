#include <iostream>
using namespace std;
int main() {
    int j, num, tot=0;
    cin >> num;

    for (int i = 1; i <= num; i++) {
        j = 1;
        tot = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                tot = tot + j;
               
            }
        }
        if (tot == i) {
            cout << i << endl;

        }

    }



}