#ifndef MAX_HEAP_H
#define MAX_HEAP_H

#include <vector>

class MaxHeap
{
private:
    std::vector<int> heap;
    int capacity;
    int size;

    int parent(int i);
    int left_child(int i);
    int right_child(int i);
    void swap(int &a, int &b);
    void max_heapify(int i);

public:
    MaxHeap(int capacity);
    void insert(int value);
    int extract_max();
};

#endif