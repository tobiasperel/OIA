#include <iostream>
#include<fstream>
#include<vector>
using namespace std;


int main() {
 
 //ifstream cin("maniobra.in");
 //ofstream cout("maniobra.out ");
 
 vector<int>x(4);
 vector<int>y(4);
 int x, y;
 int mayorX,menorX,mayorY,menorY;

 for (int i = 0; i < 4; i++) {
	 cin >> x[i] >> y[i];
 }
 x = abs(max(min(x0, x1), min(x2, x3)) - min(max(x0, x1), max(x2, x3))) + 1;
 y = abs(max(min(y0, y1), min(y2, y3)) - min(max(y0, y1), max(y2, y3))) + 1;
