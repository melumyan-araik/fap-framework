#include "tasks.h"

/*
    Задача из курса «Алгоритмы: теория и практика.
    Методы»: https://stepik.org/course/217/syllabus

    Стек - абстрактная структура данных, поддерживающая операции push и pop.
    Несложно реализовать стек так, чтобы обе эти операции работали за константное время. В
    данной задаче ваша цель - расширить интерфейс стека так, чтобы он дополнительно
    поддерживал операцию max и при этом чтобы время работы всех операций по-прежнему
    было константным.

*/

void G()
{
    int n;
    std::cin >> n;

    MaxStack myStack;

    for (int i = 0; i < n; ++i)
    {
        std::string operation;
        std::cin >> operation;

        if (operation == "push")
        {
            int x;
            std::cin >> x;
            myStack.push(x);
        }
        else if (operation == "pop")
        {
            myStack.pop();
        }
        else if (operation == "max")
        {
            std::cout << myStack.max() << std::endl;
        }
    }
}