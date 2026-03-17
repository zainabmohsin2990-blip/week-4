#include "Stack.h"

Stack::Stack() {
    topIndex = -1;
}

void Stack::push(char c) {
    if (topIndex < 99) {
        topIndex++;
        arr[topIndex] = c;
    }
}

char Stack::pop() {
    if (topIndex >= 0) {
        char temp = arr[topIndex];
        topIndex--;
        return temp;
    }
    return '\0';
}

char Stack::top() {
    if (topIndex >= 0)
        return arr[topIndex];
    return '\0';
}

bool Stack::isEmpty() {
    return topIndex == -1;
}

int Stack::size() {
    return topIndex + 1;
}

bool isMatching(char open, char close) {
    if (open == '(' && close == ')') return true;
    if (open == '{' && close == '}') return true;
    if (open == '[' && close == ']') return true;
    return false;
}