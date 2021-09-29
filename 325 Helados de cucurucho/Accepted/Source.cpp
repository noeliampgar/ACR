// Nombre del alumno Noelia Pérez
// Usuario del Juez DG21

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>
#include <stdio.h>


using namespace std;




string mostrar(int a, int b, string cad) {
	//cout << a << ' ' << b << endl;
	if (a == 0 && b == 0) {

		//cout << cad <<' ';
		return cad+" ";
	}


	string cadena = "";
	if (a > 0) {
		cadena+=mostrar(a - 1, b, cad + "C");
	}
	if (b > 0)
		cadena+=mostrar(a, b - 1, cad + "V");





	return cadena;


}


// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
void resuelveCaso() {

	// leer los datos de la entrada
	unsigned int nA, nB; cin >> nA >> nB;





		
	string aux=mostrar(nA, nB, ""); 
	cout << aux.substr(0, aux.size() - 1);cout << endl;
	

}


int main() {
	// Para la entrada por fichero.
/* */	   // Comentar para acepta el reto
/*#ifndef DOMJUDGE
	std::ifstream in("entrada.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf()); //save old buf and redirect std::cin to casos.txt
#endif


*/

	int numCasos;
	std::cin >> numCasos;
	for (int i = 0; i < numCasos; ++i)
		resuelveCaso();
	

			// Para restablecer entrada. Comentar para acepta el reto
/*#ifndef DOMJUDGE // para dejar todo como estaba al principio
	std::cin.rdbuf(cinbuf);
	system("PAUSE");
#endif*/

	return 0;
}