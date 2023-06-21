#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(int x) {
        Node* temp = new Node;
        temp->data = x;
        temp->next = top;
        top = temp;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Error: Stack is empty" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if (top == nullptr) {
            cout << "Error: Stack is empty" << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Top element is: " << s.peek() << endl;
    s.pop();
    cout << "Top element is: " << s.peek() << endl;
    s.pop();
    cout << "Top element is: " << s.peek() << endl;
    s.pop();
    if (s.isEmpty()) 
        cout << "Stack is empty" << endl;
    else 
        cout << "Stack is not empty" << endl;
    return 0;
}
