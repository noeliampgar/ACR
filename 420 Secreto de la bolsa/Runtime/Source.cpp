// Nombre del alumno Noelia Pérez
// Usuario del Juez DG21

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;


long long int resolver(long long int v[], long long int n, const long long int& suma) {
	long long int a = 0, b = 0, sumaAct = v[0], ret = 0;

	if (suma == sumaAct) {
		++ret;
	}
	while (a < n && b < n) {
		if (sumaAct < suma) {
			++b;
			if (b < n)
				sumaAct += v[b];
		}
		else if (sumaAct >= suma) {
			sumaAct -= v[a];
			++a;
		}
		if (suma == sumaAct)
			++ret;
	}
	return ret;
}


void resuelveCaso() {

	long long int numClave; string secJunta;
	cin >> numClave >> secJunta;
	long long int v[250000];

	for (long long int i = 0; i < secJunta.size(); ++i) {


		v[i] = secJunta[i] - '0';
	}


	long long int sol = resolver(v, secJunta.size(), numClave);
	cout << sol << endl;


}

int main() {


	long long int numCasos;
	std::cin >> numCasos;
	for (long long int i = 0; i < numCasos; ++i)
		resuelveCaso();


	return 0;
}
