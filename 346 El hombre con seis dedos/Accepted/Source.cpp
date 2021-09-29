
#include <math.h>
#include <algorithm>

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
long long int numBebes(long long int v[],long long int a,long long int b) {
	long long int ret = 0;
	long long int ini = 0, fin = 0;
	while (ini<a && fin<a) {
		if (v[fin] - v[ini] + 1 <= b){
			ret = max(ret, fin - ini + 1);
			++fin;
		}
		else
			++ini;
	}
	return ret;

}


void resuelveCaso(long long int a,long long int b) {
	
	long long int v[200000];
	for(long long int i =0;i<a;++i){
		cin >> v[i];

	}
	cout << numBebes(v, a,b)<<endl;
}

int main() {


	long long int a,b;
	std::cin >> a>>b;
	while (a != 0 || b != 0) {
		resuelveCaso(a,b);
		cin >> a >> b;

	}


	return 0;
}
