/*
    Author  : Umair
    Program : Implementing Linked List Based Stack
*/
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
class stack{
    Node* top;
public:
    stack(){
        top = NULL;
    }

    void push(int value){

        Node* nn = new Node(value);
        nn->next = top;
        top = nn;
        cout<<value<<" pushed into stack\n";
    }

    void pop(){

        if(top == NULL){
            cout<<"Stack UnderFlow\n";
        }
        else{
            Node* temp = top;
            cout<<top->data<<" popped from stack\n";
            top = top->next;
            delete temp;
        }
    }

    // Peek Operation
    void peek(){
        if(top == NULL){
            cout<<"Stack is Empty\n";
        }
        else{
            cout<<"Top Element : "<<top->data<<endl;
        }
    }

    bool isEmpty(){
        return (top == NULL);
    }

    void display(){

        if(top == NULL){
            cout<<"Stack is Empty\n";
            return;
        }

        Node* temp = top;
        cout<<"Stack Elements : ";
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){

    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.display();
    s.peek();
    s.pop();
    s.display();
    s.peek();
    return 0;
}

