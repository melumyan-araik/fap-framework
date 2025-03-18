# FAP-framework: Простой фреймворк для решений алгоритмических задач

## Обзор

Этот проект представляет собой небольшой фреймворк для хранения и отображения решений алгоритмических задач. Он позволяет легко организовать и запускать решения, что делает удобным тестирование и сравнение различных подходов.

FAP-framework использует std::map для хранения указателей на функции, связанных с названиями задач. Это позволяет выбирать и выполнять конкретные решения задач через простой интерфейс командной строки.

### Структура проекта

Проект организован следующим образом:

*   `lib/`: Содержит переиспользуемые структуры данных. Этот каталог разделен на `include/` (заголовочные файлы) и `src/` (файлы реализации). 

*   `tasks/`: Содержит реализации решений отдельных алгоритмических задач (например, `a.cpp`, `b.cpp` и т. д.). Каждый файл в этом каталоге должен определять функцию с тем же именем, что и файл (например, `void A()` в `a.cpp`).

*   `main.cpp`: Основной файл программы. Он инициализирует `std::map` указателями на функции, отображает меню для пользователя и выполняет выбранное решение.  Именно в этом файле добавляются новые задачи.


## Компиляция

Для компиляции проекта используйте следующую команду:

```bash
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
```

### Запуск
После успешной компиляции вы можете запустить программу, используя:

```bash
./my_program
```

Это отобразит меню доступных задач. Введите соответствующий номер для выполнения конкретного решения задачи.


### Использование

**1. Реализуйте ваше решение:** Создайте новый файл в каталоге tasks/ (например, h.cpp). Внутри файла определите функцию с именем H(), которая содержит логику вашего решения. 

```c++
// tasks/h.cpp
#include <iostream>

void H() {
    std::cout << "Выполнение решения для задачи H." << std::endl;
    // Ваш код решения здесь...
}
```

**2. Добавьте задачу в главное меню:** В main.cpp добавьте новую запись в functionMap, связывающую номер задачи с функцией:

```c++
functionMap[8] = {"H", H}; // Предположим, вы хотите назначить ей номер 8
```

**3. Перекомпилируйте:** Запустите команду компиляции.

**4. Запустите:** Ваша новая задача теперь будет доступна в меню.


### Contributing
Приветствуются любые вклады! Если у вас есть предложения, сообщения об ошибках или улучшения, пожалуйста, не стесняйтесь отправлять pull request.

