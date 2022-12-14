#include <iostream>
#include<vector>

using namespace std;

long long thor(vector<int>& a, vector<int>& f, vector<int>& p, int D) {

    int n = a.size();
    int m = p.size();

    long long fuertes = 0;
    float levanta;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            levanta = float(a[i] * f[i] / p[j]);
            if (levanta >= D) {
                fuertes++;
            }
        }
    }
    return fuertes;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int m;
    cin >> m;
    int D;
    cin >> D;
    vector<int> a;
    vector<int> f;
    a.resize(n);
    f.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cin >> f[i];
    }
    vector<int> p;
    p.resize(m);
    for (int i0 = 0; i0 < m; i0++) {
        cin >> p[i0];
    }
    long long returnedValue;
    returnedValue = thor(a, f, p, D);
    cout << returnedValue << "\n";
    return 0;
}

