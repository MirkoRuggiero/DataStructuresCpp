//
// Created by mirko.ruggiero on 2/12/2019.
//

#include <iostream>
#include "../interface/stack.h"

using namespace std;

// Constructor to initialize the stack
stack::stack(int size) {
    arr = new int[size];
    capacity = size;
    top = -1;
}

// Destructor to avoid memory leak
stack::~stack() {
    delete[]arr;
}

// Function to add an element x in the stack
void stack::push(int x) {
    if (isFull()) {
        cout << "StackOverflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    cout << "Pushing " << x << endl;
    arr[++top] = x;
}

// Function to pop top element from the stack
int stack::pop() {
    // check for stack underflow
    if (isEmpty()) {
        cout << "StackUnderflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    cout << "Popping " << peek() << endl;

    // decrease stack size by 1 and return the popped element
    return arr[top--];
}

// Utility function to return top element in a stack
int stack::peek() {
    if (!isEmpty())
        return arr[top];
    else
        exit(EXIT_FAILURE);
}

// Utility function to return the size of the stack
int stack::size() {
    return top + 1;
}

// Utility function to check if the stack is empty or not
bool stack::isEmpty() {
    return top == -1;
}

// Utility function to check if the stack is full or not
bool stack::isFull() {
    return size() == capacity;
}


int main() {
    stack stack(5);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);

    stack.pop();
    stack.pop();

    stack.push(3);

    cout << "Top element is: " << stack.peek() << endl;

    cout << "Stack size is " << stack.size() << endl;

    stack.pop();

    if (stack.isEmpty())
        cout << "Stack Is Empty\n";
    else
        cout << "Stack Is Not Empty\n";

    return 0;
};