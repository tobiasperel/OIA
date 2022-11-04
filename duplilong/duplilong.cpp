#include <vector>
#include <string>
#include<iostream>
using namespace std;

void duplilong(vector<string>& palabras, int K, vector<int>& longitudes)
{
    for (int i = 0; i < K; i++) {
        longitudes[i] = palabras[i].length();
    }
    if (K == palabras.size()) {
        for (int i = 0; i < K; i++) {
            palabras[i] = palabras[i] + palabras[i];
        }
    }
    else {
        for (int i = palabras.size() - 1; i > palabras.size() - K - 1; i--) {
            palabras[i] = palabras[i] + palabras[i];
        }
    }
}