#include "tasks.h"

/*
    Задача из курса «Алгоритмы: теория и практика.
    Методы»: https://stepik.org/course/217/syllabus

    В данной задаче ваша цель - реализовать симуляцию параллельной обработки списка задач. 
    Такие обработчики (диспетчеры) есть во всех операционных системах.
    У вас имеется n процессоров и последовательность из m задач. Для каждой задачи дано 
    время, необходимое на ее обработку. Очередная работа поступает к первому доступному 
    процессору (то есть если доступных процессоров несколько, то доступный процессор с 
    минимальным номером получает эту работу).

*/

void B()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<int> tasks(m);
    for (int i = 0; i < m; ++i)
    {
        std::cin >> tasks[i];
    }

    std::vector<long long> finish_times(n, 0); // Время освобождения каждого процессора

    for (int i = 0; i < m; ++i)
    {
        int processor_id = 0;
        for (int j = 1; j < n; ++j)
        {
            if (finish_times[j] < finish_times[processor_id])
            {
                processor_id = j;
            }
        }

        std::cout << processor_id << " " << finish_times[processor_id] << std::endl;
        finish_times[processor_id] += tasks[i];
    }
}