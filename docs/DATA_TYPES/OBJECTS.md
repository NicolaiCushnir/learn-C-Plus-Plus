### [return main page](../../README.md) || Topic. Objeccts in C++ :
В C++ объект — это экземпляр класса. Синтаксис создания объектов выглядит так :

```C++
#include <iostream>

// Определение класса
class Person {
public:
	
	// Поля (переменные)
	std::string name;
	int age;
	
	// Метод (функция)
	void display_info () {
		std::cout << "Name: " << name << ", Age: " << age << std::endl; 
	}
};

int main () {
	// Создание объекта класса Person
	Person person_1;

	// Присвоение значений полям объекта
	person_1.name = "Nicolai Cushnir";
	person_1.age = 30;

	// Вызов метода объекта
    person_1.display_info();

    return 0;
}

```

### Extern links :
* link 1
* link 2
