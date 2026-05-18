#include<iostream>
using namespace std;
bool isMatching(char open , char close){
    return (open == '('&& close == ')')||
           (open == '['&& close == ']')||
           (open == '{'&& close == '}');
}
bool checkParenthesis(string expr){
    int top = -1;
    char stack[100];

    for(int i=0 ; i<expr.length() ;i++){
        char ch = expr[i];
    
    if(ch =='('||ch =='{'||ch =='['){
        stack[++top] = ch;
    }else if(ch == ')' || ch == '}'||ch == ']'){
        if(top == -1){
            return false;
        }
        if(isMatching(stack[top],ch)){
            top--;
        }else{
            return false;
        }
    }
}
    return top == -1;
}
int main(){
    string expr = "[{()}]";
    if(checkParenthesis(expr)){
        cout<<"BaLANCED";
    }else{
        cout<< "NoT BALANACED";
    }
    return 0;
}