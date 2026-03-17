#include "Reverse.h"

Reverse::Reverse() {
    topIndex = -1;
}

void Reverse::push(char c) {
    if (topIndex < 99) {
        topIndex++;
        arr[topIndex] = c;
    }
}

char Reverse::pop() {
    if (topIndex >= 0) {
        char temp = arr[topIndex];
        topIndex--;
        return temp;
    }
    return '\0';
}

char Reverse::top() {
    if (topIndex >= 0)
        return arr[topIndex];
    return '\0';
}

bool Reverse::isEmpty() {
    return topIndex == -1;
}

int Reverse::size() {
    return topIndex + 1;
}