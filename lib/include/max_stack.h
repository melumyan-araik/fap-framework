#ifndef MAX_STACK_H
#define MAX_STACK_H

#include <stack>

class MaxStack
{
private:
    std::stack<int> dataStack;
    std::stack<int> maxStack;

public:
    MaxStack();
    void push(int value);
    void pop();
    int top();
    int max();
    bool empty();
};

#endif