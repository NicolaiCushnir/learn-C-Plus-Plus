
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

* Cîte grade sunt în Moldova

```c++
int main() {
	int temp = 0;
	std::cout << "What temperature is in Moldova? ";
	std::cin >> temp;
	std::cout << "In Moldova is " << temp << " degrees." << "\n";
}
``` 