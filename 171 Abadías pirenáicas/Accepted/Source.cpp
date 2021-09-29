#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <limits.h>
using namespace std;

int numAbadias(long long int v[], long long int n) {
	long long int ret = 1;
	long long int max = v[n - 1];
	for (long long int i = n-2; i >=0; --i) {

		if (v[i] > max) {


			max = v[i]; ret++;
		}
		

	}

	return ret;


}


int main() {
	long long int  n;
	cin >> n;
	while (n != 0 ) {


		long long int v[100000];
		for (long long int i = 0; i < n; ++i) {



			cin >> v[i];
		}
		cout << numAbadias(v, n) << endl;



		cin  >> n;
	}
	return 0;
}