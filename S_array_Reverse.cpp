#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int stack[n];   // manual stack
    int top = -1;

    // Push elements into stack
    for(int i = 0; i < n; i++) {
        stack[++top] = arr[i];
    }

    // Pop elements back into array
    for(int i = 0; i < n; i++) {
        arr[i] = stack[top--];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    reverseArray(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}