// Nombre del alumno Noelia Pérez
// Usuario del Juez DG21

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>
#include <stdio.h>


using namespace std;

const long long int CONST = 31543;


// función que resuelve el problema
long long int fac(long long int n,long long int k) {
	if (k == 0)
		return 1;
	else if (k == 1)
		return n %= CONST;
	long long int a = fac(n, k / 2);  

	long long int ret = a * a;	
	ret %= CONST;
	if (k % 2 == 1) {
		ret *= n;
		ret %= CONST; 
	}
	
	return ret;
}

// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
bool resuelveCaso() {

	// leer los datos de la entrada
	unsigned long long int n,k ; cin  >> n>>k;
	if (n==0 && k==0 )
		return false;

	
	long long int sol = fac(n,k);


	cout << sol << endl;


	return true;

}

int main() {
	   // Para la entrada por fichero.
/*	   // Comentar para acepta el reto
   #ifndef DOMJUDGE
	   std::ifstream in("entrada.txt");
	   auto cinbuf = std::cin.rdbuf(in.rdbuf()); //save old buf and redirect std::cin to casos.txt
   #endif
	   */

	while (resuelveCaso())
		;
/*
	
		// Para restablecer entrada. Comentar para acepta el reto
	#ifndef DOMJUDGE // para dejar todo como estaba al principio
		std::cin.rdbuf(cinbuf);
		system("PAUSE");
	#endif*/

	return 0;
}