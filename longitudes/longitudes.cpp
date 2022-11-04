#include <vector>
#include <string>
#include<iostream>
using namespace std;

vector<int> dameLongitudes(vector<string> v) {
	int tamano = v.size();
	vector<int>longitud;
	longitud.resize(tamano);
	for (int i = 0; i < tamano; i++) {
		longitud[i] = v[i].size();
	}
	return longitud;
}