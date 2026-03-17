#pragma once
#ifndef REVERSE_H
#define REVERSE_H

class Reverse {
private:
    char arr[100];
    int topIndex;

public:
    Reverse();
    void push(char c);
    char pop();
    char top();
    bool isEmpty();
    int size();
};

#endif