#pragma once
#ifndef EXPRESSION_H
#define EXPRESSION_H

int precedence(char op);
bool isOperator(char c);

void infixToPostfix(char infix[], char postfix[]);
int evaluatePostfix(char postfix[]);

#endif