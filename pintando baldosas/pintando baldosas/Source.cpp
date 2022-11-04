#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	int largo;
	string baldosa;

	cin >> baldosa;
	largo = baldosa.size();

	for (int i = 0; i < largo; i++) {

		if (baldosa[i] == '*' && i!=0
			&& i!=largo-1) {

			if (baldosa[i - 1] == 'R' && baldosa[i + 1] == 'R') {
				baldosa[i] = 'V';
			}
			if (baldosa[i - 1] == 'R' && baldosa[i + 1] == 'V') {
				baldosa[i] = 'A';
			}
			if (baldosa[i - 1] == 'R' && baldosa[i + 1] == 'A') {
				baldosa[i] = 'V';
			}
			if (baldosa[i - 1] == 'V' && baldosa[i + 1] == 'R') {
				baldosa[i] = 'A';
			}
			if (baldosa[i - 1] == 'V' && baldosa[i + 1] == 'V') {
				baldosa[i] = 'A';
			}
			if (baldosa[i - 1] == 'V' && baldosa[i + 1] == 'A') {
				baldosa[i] = 'R';
			}
			if (baldosa[i - 1] == 'A' && baldosa[i + 1] == 'R') {
				baldosa[i] = 'V';
			}
			if (baldosa[i - 1] == 'A' && baldosa[i + 1] == 'V') {
				baldosa[i] = 'R';
			}
			if (baldosa[i - 1] == 'A' && baldosa[i + 1] == 'A') {
				baldosa[i] = 'R';
			}
			if (baldosa[i - 1] == '*' && baldosa[i + 1] == 'R') {
				baldosa[i] = 'V';
			}
			if (baldosa[i - 1] == '*' && baldosa[i + 1] == 'V') {
				baldosa[i] = 'R';
			}
			if (baldosa[i - 1] == '*' && baldosa[i + 1] == 'A') {
				baldosa[i] = 'R';
			}
			if (baldosa[i - 1] == 'A' && baldosa[i + 1] == '*') {
				baldosa[i] = 'V';
			}
			if (baldosa[i - 1] == 'V' && baldosa[i + 1] == '*') {
				baldosa[i] = 'R';
			}
			if (baldosa[i - 1] == 'R' && baldosa[i + 1] == '*') {
				baldosa[i] = 'V';
			}
		}
		if (baldosa[0]== '*') {
			if (baldosa[1] == 'V') {
				baldosa[0] = 'A';
			}
			if (baldosa[1] == 'A') {
				baldosa[0] = 'V';
			}
			if (baldosa[1] == 'R') {
				baldosa[0] = 'A';
			}
			if (baldosa[1] == '*') {
				baldosa[0] = 'A';
			}
		}
		if (baldosa[largo-1] == '*') {

			if (baldosa[largo-2] == 'V') {
				baldosa[largo-1] = 'A';
			}
			if (baldosa[largo - 2] == 'R') {
				baldosa[largo - 1] = 'A';
			}
			if (baldosa[largo - 2] == 'A') {
				baldosa[largo - 1] = 'R';
			}
			
		}
	}

	cout << baldosa;


}