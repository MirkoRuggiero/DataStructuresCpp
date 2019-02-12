//
// Created by mirko.ruggiero on 2/12/2019.
//

#ifndef DATASTRUCTURES_STACK_H
#define DATASTRUCTURES_STACK_H

// define default capacity of the stack
#define SIZE 10000

// Class for stack
class stack {
    int *arr;
    int top;
    int capacity;

public:
    stack(int size = SIZE);        // constructor

    ~stack();                      //destructor

    void push(int);

    int pop();

    int peek();

    int size();

    bool isEmpty();

    bool isFull();
};


#endif //DATASTRUCTURES_STACK_H
