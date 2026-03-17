#include <iostream>
#include <stack>
#include "expression.h"

using namespace std;

int precedence(char op)
{
    switch(op)
    {
        case '+':
        case '-':
            return 1;

        case '*':
        case '/':
            return 2;
    }
    return 0;
}

bool isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void infixToPostfix(char infix[], char postfix[])
{
    stack<char> s;

    int k = 0; 

    for (int i = 0; infix[i] != '\0'; i++)
    {
        char c = infix[i];

        
        if (c >= '0' && c <= '9')
        {
            postfix[k] = c;
            k = k + 1;
        }

       
        else if (c == '(')
        {
            s.push(c);
        }

       
        else if (c == ')')
        {
            for (; s.empty() == false && s.top() != '('; )
            {
                postfix[k] = s.top();
                k = k + 1;
                s.pop();
            }
            s.pop(); 
        }

       
        else if (isOperator(c))
        {
            for (; s.empty() == false && precedence(s.top()) >= precedence(c); )
            {
                postfix[k] = s.top();
                k = k + 1;
                s.pop();
            }
            s.push(c);
        }
    }

    
    for (; s.empty() == false; )
    {
        postfix[k] = s.top();
        k = k + 1;
        s.pop();
    }

    postfix[k] = '\0';
}

int evaluatePostfix(char postfix[])
{
    stack<int> s;

    for (int i = 0; postfix[i] != '\0'; i++)
    {
        char c = postfix[i];

        
        if (c >= '0' && c <= '9')
        {
            s.push(c - '0');
        }
        else
        {
            int val2 = s.top();
            s.pop();

            int val1 = s.top();
            s.pop();

            int result = 0;

           
            switch (c)
            {
            case '+':
                result = val1 + val2;
                break;

            case '-':
                result = val1 - val2;
                break;

            case '*':
                result = val1 * val2;
                break;

            case '/':
                result = val1 / val2;
                break;
            }

            s.push(result);
        }
    }

    return s.top();
}