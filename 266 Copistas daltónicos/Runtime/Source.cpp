#include <iostream>
#include <string>
#include <fstream>
using namespace std;


struct cambio {
	char a;
	char b;
};



void cambiar(char a[10000][10000], long long int const & m, long long int const& n, cambio colores[10000]) {

	for (long long int i = 0; i < m; ++i) {
		for (long long int j = 0; j < n; ++j) {
			//cout << a[i][j] << "\n";
			bool listo = false;
			for (long long int k = 0; k < 26 && !listo; ++k) {
				
				if (colores[k].a != colores [k].b && colores[k].a == a[i][j]  ) {

					a[i][j] = colores[k].b;
					listo = true;

				}

			}

		}
	}



}

void resuelveCaso(long long int m,long long int n) {

	char a[10000][10000];
	for (long long int i = 0; i < m; ++i) {
		for (long long int j = 0; j < n; ++j) {
			cin >> a[i][j];
		}
	}
	long long int numCop;
	cin >> numCop;
	cambio vCopistas[10000];

	for (long long int j = 0; j < numCop; ++j) {
		cin >> vCopistas[j].a >> vCopistas[j].b;

	}
	cambio colores[26];
	for (long long int i = 0; i < 26; ++i) {
		colores[i].a = i + 65;
		colores[i].b = i + 65;
		for (long long int j = 0; j < numCop; ++j) {

			if (vCopistas[j].a == colores[i].b)
				colores[i].b = vCopistas[j].b;
		}
	}
	cambiar(a, m, n, colores);
	for (long long int i = 0; i < m; ++i) {
		for (long long int j = 0; j < n; ++j) {
			cout << a[i][j];
		}
		cout << endl;
	}/**/

}


int main() {	
	long long int m, n;
	cin >> m >> n;
	while (n != 0 && m != 0) {
		resuelveCaso(m,n);



		cin >> m >> n;
	}
	return 0;
}