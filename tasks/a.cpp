#include "tasks.h"

/*
    Задача из курса «Алгоритмы: теория и практика.
    Методы»: https://stepik.org/course/217/syllabus

    Первая строка входа содержит число операций 1 ≤ n ≤ 105. Каждая из последующих n строк
    задают операцию одного из следующих двух типов:
    - Insert x, где 0 ≤ x ≤ 109 — целое число;
    - ExtractMax.
    Первая операция добавляет число x в очередь с приоритетами, вторая — извлекает
    максимальное число и выводит его
*/

void A()
{
    int n;
    std::cin >> n;

    MaxHeap heap(n);

    for (int i = 0; i < n; ++i)
    {
        std::string operation;
        std::cin >> operation;

        if (operation == "Insert")
        {
            int x;
            std::cin >> x;
            heap.insert(x);
        }
        else if (operation == "ExtractMax")
        {
            int max_val = heap.extract_max();
            std::cout << max_val << std::endl;
        }
    }
}