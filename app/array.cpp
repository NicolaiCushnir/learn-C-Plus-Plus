#include <iostream>
#include <string>

int main() {
	std::string users[3] = {"Nicolai Cushnir", "Ion Mocanu", "Alex Barac"};
	// data
	for (int i = 0; i < 5; i++) {
  		std::cout << users[i] << "\n";
	}
	
	std::cout << "\n";
}