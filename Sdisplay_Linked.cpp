/*
    Author  : Umair
    program : displaying a linked list based stack
*/
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class stack{
public:
    Node* top = NULL;  // node* head = NULL
// using constructor initializing stack
    stack(){
        top = NULL;
    }
// defining push (member fxn)
    void push(int value){
        Node* nn = new Node();
        nn->data = value;
        nn->next = top;

        top = nn;
    }
// defining display function
    void display(){
        Node* temp = top;
        while(temp != NULL){
            cout<<temp->data<< "->";
            temp = temp->next;
        }
        cout<<"NULL";
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