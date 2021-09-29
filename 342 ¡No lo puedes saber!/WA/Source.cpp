// Nombre del alumno Noelia Pérez
// Usuario del Juez DG21

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>
#include <stdio.h>


using namespace std;




// función que resuelve el problema
bool loSabe(long long int n,long long int ini,long long int fin,long long int numP,long long int vP[]) {
	long long int a = ini, b = fin; bool loSabe = false;
	long long int i = 0;
	while (i < numP && !loSabe) {
		if (vP[i] <= n)
			a = vP[i];
		else b = vP[i]-1;
	
	if (a==b)
		loSabe = true;




	++i;
	}



	
	return loSabe;
}

// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
bool resuelveCaso() {

	// leer los datos de la entrada
	unsigned long long int n, ini, fin; cin  >> ini >> fin>> n;
	if (n==0 && ini==0 && fin==0)
		return false;

	long long int numP;
	cin >> numP;
	long long int vP[1000];
	long long int i = 0;
	while (i < numP) {
		cin >> vP[i];
		++i;

	}

	bool sol = loSabe(n,ini,fin,numP,vP);


	// escribir sol
	if (sol)
		cout << "LO SABE" << endl;
	else cout << "NO LO SABE" << endl;


	return true;

}

  int main() {


	while (resuelveCaso())
		;

	

	return 0;
}