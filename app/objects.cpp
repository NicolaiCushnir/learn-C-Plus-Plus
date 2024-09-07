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
