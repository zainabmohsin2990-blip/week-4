#include <iostream>
#include "Reverse.h"
using namespace std;

int main() {
    Reverse s;
    int n;
    char val;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter characters : ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        s.push(val);
    }

   
    Reverse rev;
    while (!s.isEmpty()) {
        rev.push(s.pop());
    }

    cout << "Reverse: ";
    Reverse temp = rev; 
    while (!temp.isEmpty()) {
        cout << temp.pop() << " ";
    }
    cout << endl;

    
    Reverse unique;
    while (!rev.isEmpty()) {
        char current = rev.pop();
        bool exists = false;
        Reverse tempCheck = unique;

        while (!tempCheck.isEmpty()) {
            if (tempCheck.pop() == current) {
                exists = true;
                break;
            }
        }

        if (!exists)
            unique.push(current);
    }

    cout << "Updated stack: ";
    temp = unique;
    while (!temp.isEmpty()) {
        cout << temp.pop() << " ";
    }
    cout << endl;

    return 0;
}