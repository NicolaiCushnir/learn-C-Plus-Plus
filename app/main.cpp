// Maximum dintre 2 numere.

#include <iostream>

int main () {
	double a, b, c;
	std::cout << "Scrie 3 numere : \n";
	std::cout << "Introdu primu număr. ";
	std::cin >> a;
	std::cout << "Introdu al 2-lea număr. ";
	std::cin >> b;
	std::cout << "Introdu al 2-lea număr. ";
	std::cin >> c;

	if(a > b && a > c) {
		std::cout << "Maximum este : " << a << "\n";
	} else if (b > a && b > c) {
		std::cout << "Maximum este : " << b << "\n";
	} else if (a == b && b == c){
		std::cout << "Numerele sunt egale \n";
	} else if (c > a && c > b) {
		std::cout << "Maximum este : " << c << "\n";
	} else {
		std::cout << "Ceva ai greșit. \n";
	} 
}