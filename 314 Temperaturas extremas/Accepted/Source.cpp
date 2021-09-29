

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
void numPV(long long int v[],long long int n,long long int & numP,long long int &numV) {
	long long int i = 2;
	while (i < n) {
		if (v[i - 2]<v[i - 1] && v[i - 1]>v[i ])
			++numP;
		else if(v[i - 2] > v[i - 1] && v[i - 1] < v[i ])
			++numV;



		++i;
	}

}


void resuelveCaso() {
	long long int numTas;
	cin >> numTas;

	long long int v[10000];
	for(long long int i =0;i<numTas;++i){
		cin >> v[i];
	
	
	}

	long long int numPicos=0, numValles=0;
	numPV(v, numTas, numPicos, numValles);
	cout << numPicos << ' ' << numValles << endl;


}

int main() {


	long long int numCasos;
	std::cin >> numCasos;
	for (long long int i = 0; i < numCasos; ++i)
		resuelveCaso();


	return 0;
}
