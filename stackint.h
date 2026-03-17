#ifndef STACKINT_H
#define STACKINT_H

#include <iostream>
using namespace std;

#define MAX 100

class StackInt
{
private:
    int arr[MAX];  
    int topIndex;    

public:
    StackInt();                  
    bool isEmpty();             
    bool isFull();            
    void push(int val);          
    int pop();                   
    int top();                   
    void display();              
    StackInt copyStack();       
    void insertAtPosition(int pos, int val); 
    void maxAndAverage();        
    int size();                  
};

#endif