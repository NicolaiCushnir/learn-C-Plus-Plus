#include <iostream>
#include <cstring>

int main () {
	// std::cout << "What month you are born ?  " << "\n";

	int grade = 12;

	switch (grade) {
		case 1:
			std::cout << "ianuarie\n"; break;
		case 2:
			std::cout << "februarie\n"; break;
		case 7:
			std::cout << "iulie\n"; break;
		case 8:
	  		std::cout << "august\n"; break;
		case 9:
	    	std::cout << "Freshman\n"; break;
	  	case 10:
	    	std::cout << "Sophomore\n"; break;
	  	case 11:
	    	std::cout << "Junior\n"; break;
	  	case 12:
	    	std::cout << "Senior\n"; break;
	  	default:
	    	std::cout << "Invalid\n"; break;
	}
}