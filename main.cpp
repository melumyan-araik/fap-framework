#include "tasks/tasks.h"

#include <map>
#include <functional>

/*

    1. Команда для компиляции:
        g++ main.cpp \
            lib/src/max_heap.cpp \
            lib/src/max_stack.cpp \
            tasks/a.cpp \
            tasks/b.cpp \
            tasks/c.cpp \
            tasks/d.cpp \
            tasks/e.cpp \
            tasks/f.cpp \
            tasks/g.cpp \
        -I lib/include/ -I tasks/ -o my_program

    2. Запустить ./my_program.exe

*/
int main()
{
    // Создаем хэш-таблицу (std::map)
    std::map<int, std::pair<std::string, std::function<void()>>> functionMap;

    // Заполняем хэш-таблицу
    functionMap[1] = {"A", A};
    functionMap[2] = {"B", B};
    functionMap[3] = {"C", C};
    functionMap[4] = {"D", D};
    functionMap[5] = {"E", E};
    functionMap[6] = {"F", F};
    functionMap[7] = {"G", G};

    int choice;
    while (true)
    {
        std::cout << "\nChoose a function to run:" << std::endl;

        // Выводим меню на основе хэш-таблицы
        for (const auto &entry : functionMap)
        {
            std::cout << entry.first << ". " << entry.second.first << "()" << std::endl;
        }
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter a number: ";
        std::cin >> choice;

        if (choice == 0)
        {
            std::cout << "Exiting the program." << std::endl;
            return 0;
        }

        // Ищем функцию в хэш-таблице
        auto it = functionMap.find(choice);

        if (it != functionMap.end())
        {
            // Нашли функцию, вызываем ее
            it->second.second();
        }
        else
        {
            std::cout << "Invalid choice. Please enter a number from 0 to " << functionMap.size() << "." << std::endl;
        }
    }

    return 0;
}