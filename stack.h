#ifndef stack
#define stack
#include <iostream>
using namespace std;
struct node {
    int data;
    node* next;
    node(int val) {
        data = val;
        next = nullptr;
    }
};
struct Stack {
    node* top = nullptr;
    void push(int val) {
        node* nn = new node(val);
        nn->next = top;
        top = nn;
    }
    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }
    void Pop() {
        if (top == nullptr) {
            cout << "stack is empty\n";
            return;
        }
        node* temp = top;
        top = top->next;
        delete temp;
    }

    int isempty() {
        if (top == nullptr) {
            return 1;
        } else {
            return 0;
        }
    }
    void Display() {
        node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
#endif