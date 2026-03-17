#pragma once
#ifndef STACK_H
#define STACK_H

class Stack {
private:
    char arr[100];
    int topIndex;

public:
    Stack();
    void push(char c);
    char pop();
    char top();
    bool isEmpty();
    int size();
};

bool isMatching(char open, char close);

#endif