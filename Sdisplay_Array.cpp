/*
    Name    : Umair Farooq
    Program : declaring and displaying a stack
*/
#include<iostream>
using namespace std;
#define size 5
// declaring a class
class stack{
private:
    int arr[size];  // array based
    int top;        // declaring top element

public:
// using constructor initialising stack
    stack(){        
        top = -1;
    }
// using member function adding elements
    void push(int value){
        if (top == size - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = value; // pre-incrementation
    }
// using member function to display
    void display(){
        cout<<"displaying stack"<<endl;
        for (int i = top; i >= 0; i--) {   // FIXED
            cout << arr[i] << " ";
        }  
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.display();
}