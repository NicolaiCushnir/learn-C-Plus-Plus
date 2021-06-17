* Bellow is simple for loop together with array.

```C++
#include <iostream>
#include <string>

int main() {
	std::string users[6] = {
		"Emty",
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