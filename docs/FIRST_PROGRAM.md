### [return at main page](../README.md)

### Первая программа на C++ : Hello World.
После чего установили компилятор можно уже начать.

* Первая программа на C++

```c++
#include <iostream>

int main() {
   std::cout << "Всё что угодно кроме \'Hello World\' in c++\n";
}
```

### Комиляция программы : Hello World.
Чтобы мы могли видеть результат мы должны скомпилировать программу с помощью команды `g++ -o main main.cpp`.  А что бы запустить её надо написать `./main.cpp`

### Обяснение программы
aici o sa trebuiasca sa scrii lamurire la programul care ai facut mai sus

### Кракозябры
В случае если твой родной язык не поддерживается, тогда попробуй в терминал-е `Git Bash`, `options/text/locate/en_US`. Или!

```C++
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
```

Как поняли из коментарии программы, функция `SetConsoleOutputCP(CP_UTF8);` показывает правельно utf-8.
