// Nombre del alumno Noelia Pérez
// Usuario del Juez DG21

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;



 int codigo(long int v[], long int n, const long int& suma) {
	long int a = 0, b = 1, sumaAct = v[0], ret = 0;


	while (b < n && a<n) {
		if (sumaAct + v[b] < suma) {
			

			sumaAct += v[b];++b;
		}
		else if(sumaAct + v[b] > suma) {
			
			sumaAct -= v[a];++a;

		}
		else {
			++ret;
			sumaAct += v[b]; ++b;

		}
		//cout << sumaAct << endl;
		
	}
	return ret;
}


void resuelveCaso() {

	long int numClave; string secJunta;
	cin >> numClave >> secJunta;
	long int v[2500];

	for ( int i = 0; i < secJunta.size(); ++i) {


		v[i] = secJunta[i] - '0';
	}


	 int sol = codigo(v, secJunta.size(), numClave);
	cout << sol << endl;


}

int main() {


	long int numCasos;
	std::cin >> numCasos;
	for (long int i = 0; i < numCasos; ++i)
		resuelveCaso();


	return 0;
}
