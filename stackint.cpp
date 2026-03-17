#include "StackInt.h"
#include <iostream>
using namespace std;

StackInt::StackInt() { 
    topIndex = -1; 
}

bool StackInt::isEmpty() {
    return (topIndex == -1); 
}

bool StackInt::isFull() { 
    return (topIndex == MAX - 1); 
}

void StackInt::push(int val)
{
    if (!isFull())
    {
        topIndex = topIndex + 1;
        arr[topIndex] = val;
    }
    
}

int StackInt::pop()
{
    if (!isEmpty())
    {
        int val = arr[topIndex];
        topIndex = topIndex - 1;
        return val;
    }
    else
    {
        return -1; 
    }
}

int StackInt::top()
{
    if (!isEmpty())
        return arr[topIndex];
    return -1; 
}

int StackInt::size()
{
    return topIndex + 1;
}

void StackInt::display()
{
    StackInt temp = this->copyStack(); 
    while (!temp.isEmpty())
        cout << temp.pop() << " ";
    cout << endl;
}

StackInt StackInt::copyStack()
{
    StackInt copy;
    for (int i = 0; i <= topIndex; i++)
        copy.push(arr[i]);
    return copy;
}

void StackInt::insertAtPosition(int pos, int val)
{
    if (pos < 1 || pos > topIndex + 2)
        return; 

    StackInt temp;
    for (int i = topIndex; i >= pos - 1; i--)
        temp.push(pop());

    push(val);

    while (!temp.isEmpty())
        push(temp.pop());
}

void StackInt::maxAndAverage()
{
    if (isEmpty())
        return; 

    StackInt temp = copyStack();
    int sum = 0;
    int maxVal = temp.arr[0];
    int count = 0;

    while (!temp.isEmpty())
    {
        int val = temp.pop();
        sum += val;
        if (val > maxVal)
            maxVal = val;
        count++;
    }

    cout << maxVal << " ";            
    cout << (double)sum / count << endl; 
}