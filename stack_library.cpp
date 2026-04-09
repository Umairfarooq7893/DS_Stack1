#include<iostream>
#include<stack>
using namespace std;

class Stack_Class {
public:
// Member function jaha all stack operations are written
    void demo() {
        // Creates a stack s that stores integers
        stack<int> s;

        // Adds elements to stack
        // Stack becomes (top → bottom): 40 30 20 10
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);

        // Removes top elements
        // Removes 40 and 30
        // Stack becomes: 20 10
        s.pop();
        s.pop();

        // top() returns top element without deleting it
        cout << "Top element: " << s.top() << endl;

        // Checks if stack is empty
        if (s.empty()) {
            cout << "Stack is empty";
        } else {
            cout << "Stack is not empty";
        }

        // STL stack has no full()

        // print stack
        cout << "\nStack elements: ";

        // defining a stack temp
        stack<int> temp;
        // Copy original stack into temp (to avoid modifying original)
        temp = s;
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
    }
};

int main() {
    Stack_Class obj;
    obj.demo();
    return 0;
}