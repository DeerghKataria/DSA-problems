#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int MAX_SIZE = 100;

class Stack {
    private:
        int arr[MAX_SIZE];      // By default the size is 100
        int top;                // For declaring the Top
    public:
        Stack() {
            top = -1;           // Invalid Index for Empty Stack
        }
        bool isEmpty() {        // When stack is Empty
            return top == -1;
        }
        bool isFull() {         // When Stack is Full
            return top == MAX_SIZE - 1;
        }
        void push(int x) {      
            if (isFull()) {
                cout << "Error: Stack Overflow!" << endl;
                return;
            }
            arr[++top] = x;
        }
        int pop() {
            if (isEmpty()) {
                cout << "Error: Stack Underflow!" << endl;
                return -1;
            }
            return arr[top--];
        }
        int peek() {
            if (isEmpty()) {
                cout << "Error: Stack is Empty!" << endl;
                return -1;
            }
            return arr[top];
        }

        void displayStack() {
        if (isEmpty()) {
            cout << "Error: Stack is Empty" << endl;
            return;
        }

        cout << "Current Stack: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
        }
};

int main() {
    Stack s;
    s.push(1);          // Pushing 1
    s.displayStack();
    s.push(2);          // Pushing 2
    s.displayStack();
    s.push(3);          // Pushing 3
    s.displayStack();
    cout << s.pop() << endl;    // Popping 3
    s.displayStack();
    cout << s.pop() << endl;    // Popping 2
    s.displayStack();
    cout << s.peek() << endl;   // Displaying stack status from the Top
    s.displayStack();
    s.push(4);                  // Pushing 4
    s.displayStack();
    cout << s.pop() << endl;    // Popping 4
    s.displayStack();
    cout << s.pop() << endl;    // Popping 1
    s.displayStack();
    return 0;
}



