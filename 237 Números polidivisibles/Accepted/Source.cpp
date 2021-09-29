// Nombre del alumno Noelia Pérez
// Usuario del Juez DG21

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <vector>



using namespace std;

long long int numDigitos(long long int n) {
	long long int ret = 0;
	while (n > 0) {

		n /= 10;
		++ret;

	}
	return ret;


}


bool resolver(long long int n) {
	if (numDigitos(n) == 1)
		return true;
	else return n % numDigitos(n) == 0 && resolver(n / 10);


}



// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
bool resuelveCaso() {
	// leer los datos de la entrada
	unsigned long long int n; cin >> n;
	if (!std::cin)
		return false;
	
	long long int sol = resolver(n);


	// escribir sol

	if (sol)
		cout << "POLIDIVISIBLE\n";
	else
		cout << "NO POLIDIVISIBLE\n";
	
	
	return true;

}

int main() {
	/*// Para la entrada por fichero.
	// Comentar para acepta el reto
#ifndef DOMJUDGE
	std::ifstream in("entrada.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf()); //save old buf and redirect std::cin to casos.txt
#endif
	*/

	while (resuelveCaso())
		;


	/*// Para restablecer entrada. Comentar para acepta el reto
#ifndef DOMJUDGE // para dejar todo como estaba al principio
	std::cin.rdbuf(cinbuf);
	system("PAUSE");
#endif*/

	return 0;
}