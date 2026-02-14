
#include <windows.h>
#include <iostream>

int main() {

	// Чтобы правельно показывало иностраные языки.
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Покажет руский язык а не краказябры \n";
    std::cout << "Here is a simple text in English. \n"; 
    std::cout << "Japanese: { 私 + 人生. } \n";
    std::cout << "Chiar și în limba Romînă acest text va apărea cum trebuie. \n" << std::endl;

    // ждёт нажатия Enter
    std::cin.get();
    return 0;
}