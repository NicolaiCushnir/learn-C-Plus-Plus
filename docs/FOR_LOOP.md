### [Return At Main Page](../README.md)

### Topic : For Loop
* Bellow is simple for loop together with array.

```C++
#include <iostream>
#include <string>

int main() {
	std::string users[6] = {
		"Emty User",
		"Nicolai Cushnir",
		"Ion Mocanu",
		"Vova Muschchei",
		"Iulia Alexeeva",
		"Alexandru Tarus"
	};

	for(int i=1; i<=5; i++) {
		std::cout << i << " " << users[i] << '\n';
	}

	return 0;
}
```