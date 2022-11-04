#include <vector>
#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

long long suma(vector<int> v)
{
	long long total=0;
	for (int i = 0; i < v.size(); i++) {
		total += v[i];
	}
	return total;
}
