#include <iostream>
#include <string>
#include <fstream>
using namespace std;


long long int erasmus(long long int v[], long long int n) {
	
	long long int ret = 0, multip = 0;
	for (long long int i = 0; i < n-1 ; ++i) {
		multip += v[i];
		ret += multip * v[i + 1];



		}

	return ret;
}


int main() {
	long long int n; cin >> n;
	while(n!=0){
	long long int v[100000];

	for (long long int i = 0; i < n; ++i)
		cin >> v[i];
	cout << erasmus(v, n) << endl;
	cin >> n;
	}
	return 0;
}