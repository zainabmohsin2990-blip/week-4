#include <iostream>
#include "expression.h"

using namespace std;

int main()
{
    char infix[100];
    char postfix[100];

    cout << "Enter Infix Expression: ";
    cin >> infix;

    infixToPostfix(infix, postfix);

    cout << "Postfix Expression: " << postfix << endl;

    int result = evaluatePostfix(postfix);

    cout << "Final Result: " << result << endl;

    return 0;
}