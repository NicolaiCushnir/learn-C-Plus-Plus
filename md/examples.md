
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

* Write you name with parameter

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

* Maximum la 2 numere.

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

* Maximum la 3 numere

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