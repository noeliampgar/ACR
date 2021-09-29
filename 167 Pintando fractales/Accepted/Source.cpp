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
long long int resolver(long long int n) {
    if (n == 1)
        return 4;
    return resolver(n/2)*4+n*4;
}

// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
bool resuelveCaso() {
    // leer los datos de la entrada
    long long int n; cin >> n;
    if (!std::cin)
        return false;

    long long int sol = resolver(n);

    // escribir sol

    cout << sol << endl;
    return true;

}

int main() {
 /*   // Para la entrada por fichero.
    // Comentar para acepta el reto
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