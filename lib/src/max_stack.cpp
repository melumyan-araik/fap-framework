#include "max_stack.h"
#include <algorithm>

MaxStack::MaxStack() {}

void MaxStack::push(int value)
{
    dataStack.push(value);

    if (maxStack.empty() || value >= maxStack.top())
    {
        maxStack.push(value);
    }
}

void MaxStack::pop()
{
    if (dataStack.empty())
    {
        return;
    }

    int poppedValue = dataStack.top();
    dataStack.pop();

    if (poppedValue == maxStack.top())
    {
        maxStack.pop();
    }
}

int MaxStack::top()
{
    if (dataStack.empty())
    {
        return -1;
    }
    return dataStack.top();
}

int MaxStack::max()
{
    if (maxStack.empty())
    {
        return -1;
    }
    return maxStack.top();
}

bool MaxStack::empty()
{
    return dataStack.empty();
}