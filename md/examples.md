
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

* Maximum la 2 numere. Vreu sa fac alt fel

```c++
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
``` 