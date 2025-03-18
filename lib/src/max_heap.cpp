#include "max_heap.h"

MaxHeap::MaxHeap(int capacity) : capacity(capacity), size(0)
{
    heap.resize(capacity + 1); // Индексация с 1
}

int MaxHeap::parent(int i)
{
    return i / 2;
}

int MaxHeap::left_child(int i)
{
    return 2 * i;
}

int MaxHeap::right_child(int i)
{
    return 2 * i + 1;
}

void MaxHeap::swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void MaxHeap::max_heapify(int i)
{
    int largest = i;
    int left = left_child(i);
    int right = right_child(i);

    if (left <= size && heap[left] > heap[largest])
    {
        largest = left;
    }

    if (right <= size && heap[right] > heap[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(heap[i], heap[largest]);
        max_heapify(largest);
    }
}

void MaxHeap::insert(int value)
{
    if (size >= capacity)
    {
        return; // Очередь полна
    }
    size++;
    heap[size] = value;
    int i = size;
    while (i > 1 && heap[i] > heap[parent(i)])
    {
        swap(heap[i], heap[parent(i)]);
        i = parent(i);
    }
}

int MaxHeap::extract_max()
{
    if (size == 0)
    {
        return -1; // Очередь пуста
    }
    int max_value = heap[1];
    heap[1] = heap[size];
    size--;
    max_heapify(1);
    return max_value;
}