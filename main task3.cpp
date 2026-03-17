#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
    char expr[100];
    cout << "Enter an expression: ";
    cin >> expr;

    Stack s;
    int openCount = 0, closeCount = 0;
    bool valid = true;
    int i = 0;

    while (expr[i] != '\0') {
        char ch = expr[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
            openCount++;
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            closeCount++;
            char last = s.isEmpty() ? '\0' : s.pop();
            if (!isMatching(last, ch)) {
                valid = false;
                break;
            }
        }

        i++;
    }

    if (!s.isEmpty())
        valid = false;

    cout << "Result: Expression is " << (valid ? "VALID" : "INVALID") << endl;
    cout << "Opening symbols count: " << openCount << endl;
    cout << "Closing symbols count: " << closeCount << endl;

    return 0;
}