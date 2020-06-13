// max la 2 numere apoi 3  

#include <iostream>

using namespace std;

int main () {

double a, b, max;

cout << "a=" ; cin>>a;
cout << "b=" ; cin>>b;

max = a;

	{
		if (b > max) {
			cout << "Maximul este " << b << endl;
		} else if (a==b) {
			cout << "Numerele sunt egale" << endl;
		} else if (b<max) {
			cout << "Maximul este " << a << endl;
		}
	}

	return 0;
}
