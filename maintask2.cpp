#include <iostream>
#include "StackInt.h"
using namespace std;

int main()
{
    StackInt s;
    int n, val, pos;

    cout << "How many integers do you want to enter? ";
    cin >> n;

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        s.push(val);
    }

    cout << endl;

   
    s.display();

    
    StackInt copiedStack = s.copyStack();
    cout << "Copied stack: ";
    copiedStack.display();

   
    cout << "Enter element to insert: ";
    cin >> val;
    cout << "Enter position to insert at (1 = bottom, top = " << s.size() + 1 << "): ";
    cin >> pos;
    s.insertAtPosition(pos, val);

    cout << "Stack after insertion: ";
    s.display();

    
    s.maxAndAverage();

    return 0;
}