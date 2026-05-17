#include<iostream>
using namespace std;

#define max 100
class stack{
    int arr[max];
    int top;
public:
    stack(){
        top = -1;
    }
    void push(int value){
        if(top == max-1){
            cout<<"Overflow";
            return;
        }
        arr[++top] = value;
    }
    int pop(){
        if(top == -1){
            cout<<"Underflow";
            return -1;
        }
        return arr[top--];
    }
    bool isEmpty(){
        return (top == -1);
    }
};
int evaluatePostfix(string postfix){

    stack s;
    for(char ch : postfix){

        // If operand
        if(ch >= '0' && ch <= '9'){
            s.push(ch - '0');
        }

        // Operator
        else{
            int val2 = s.pop();
            int val1 = s.pop();
            switch(ch){
                case '+':
                    s.push(val1 + val2);
                    break;
                case '-':
                    s.push(val1 - val2);
                    break;
                case '*':
                    s.push(val1 * val2);
                    break;
                case '/':
                    s.push(val1 / val2);
                    break;
            }
        }
    }
    return s.pop();
}
int main(){

    string postfix = "23*5+";
    cout<<"Postfix Expression : "<<postfix<<endl;
    cout<<"Result : "
        <<evaluatePostfix(postfix);
    return 0;
}