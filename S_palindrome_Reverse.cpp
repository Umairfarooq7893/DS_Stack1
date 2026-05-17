#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int n) {
    int stack[n];
    int top = -1;

    // Step 1: Push elements
    for(int i = 0; i < n; i++) {
        stack[++top] = arr[i];
    }

    // Step 2: Compare
    for(int i = 0; i < n; i++) {
        if(arr[i] != stack[top--]) {
            return false;
        }
    }

    return true;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = 5;

    if(isPalindrome(arr, n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}