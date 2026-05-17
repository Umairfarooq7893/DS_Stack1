/*
    Stack Interface (DSA)
    A stack interface defines the operations (functions)
    that can be performed on a stack,
    without worrying about how it is implemented (array or linked list)
*/

class Stack {
public:
    void push(int x);   // Insert element
    void pop();         // Remove top element
    int top();          // Return top element
    bool isEmpty();     // Check if stack is empty
    bool isFull();      // Check if stack is full (for array)
};