### [Return At Main Page](../README.md)

### Examples of C++ Code :
* Very simple calculator. Yeah. I am glad that i made this program. :)

```c++
#include <iostream> 

int main() 
{ 
    int first_number;
    int second_number;
    int result_of_numbers;

    std::cout << "Enter the first number : "; std::cin >> first_number;
    std::cout << "Enter the second number : "; std::cin >> second_number; 
    result_of_numbers = first_number + second_number; 
    std::cout << "Sum of numbers is : " << result_of_numbers << std::endl;
    return 0; 
}
```

* learn string

```c++
int main() {
   std::string message = "this is a good thing dude. \n";
   std::cout << message;
}
```

* The sum of 2 numbers.

```C++
int main() {
	std::cout << "Write the sum of 2 numbers : ";
	int a; int b; int sum;
	std::cin >> a >> b;
	sum = a + b;
	std::cout << "The sum of the numbers is " << sum << "\n";
}
```

* Write you name, with `cin` operator.

```c++
#include <iostream>
#include <cstring>

int main() {
	std::string name = "";
	std::cout << "Write your name : ";
	std::cin >> name;
	std::cout << "Your name is : " << name << "\n\n";
}
```

* Max to 2 numbers..

```c++
#include <iostream>

int main () {
	double a, b, max;
	std::cout << "Write 2 numbers : \n";
	std::cout << "Write first number. ";
	std::cin >> a;
	std::cout << "Write second number. ";
	std::cin >> b;

	// std::cin >> a, b;
	
	if(a > b) {
		std::cout << "Maximum este : " << a << "\n";
	} else if (b > a) {
		std::cout << "Maximum este : " << b << "\n";
	} else if (a == b){
		std::cout << "Numerele sunt egale \n";
	} else {
		std::cout << "Ceva ai greșit. \n";
	} 
}
``` 

* Max to 3 numbers

```C++
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
```

* Încă mă gîndesc la acest exercițiu... Vreau ca în loc să scriu ce lună a anului este cu cifre `{ 1 ~ 12 }` să scriu chiar lunilie anului cu cuvinte nu cu cifre. Dar în C++ e dificil să faci asta.

```c++
#include <iostream>
#include <cstring>

int main () {
	std::cout << "What month you are born ? \n";
	std::cout << "Write with numbers {1 ~ 12} ";
	
	int born = 12;
	
	std::cin >> born;
	
	switch(born) {
		case 1 :
			std::cout << "ianuarie \n"; break;
		case 2 :
			std::cout << "februarie \n"; break;
		case 3 :
			std::cout << "martie \n"; break;
		case 4 :
			std::cout << "aprilie \n"; break;
		case 5 :
			std::cout << "mai \n"; break;
		case 6 :
			std::cout << "iunine \n"; break;
		case 7 :
			std::cout << "iulie \n"; break;
		case 8 :
			std::cout << "august \n"; break;
		case 9 :
			std::cout << "septembrie \n"; break;
		case 10 :
			std::cout << "octombrie \n"; break;
		case 11 :
			std::cout << "noiembrie \n"; break;
		case 12 :
			std::cout << "decembrie \n"; break;
		default:
			std::cout << "Ceva ai facut greșit. \n";
	}
}
```

* A simple while loop

```c++
#include <iostream>

int main() {

  int guess;
  int tries = 0;
  std::cout << "I have a number 1-10.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;
 
  while (guess != 8 && tries < 50) {
    std::cout << "Wrong guess, try again: ";
    std::cin >> guess;
    tries++;
  }
  
  if (guess == 8) {
    std::cout << "You got it!\n";
  }  
}
```

* Iteration pina la 1 miliard.

```c++
#include <iostream>

int main() {
	int i = 1;
	for(i; i <= 10000000; i++) {
		std::cout << i << '\n';
		if(i == 10000000) {
			std::cout << "Congratulation! Server Fell. \n";
		}
	}

	return 0;
}
```