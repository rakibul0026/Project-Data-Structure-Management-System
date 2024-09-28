#define MAX 100
#include <iostream>
using namespace std;

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() { top = -1; }

    void push(int val) {
        if (top >= (MAX - 1)) {
            cout << "Stack Overflow\n";
        } else {
            arr[++top] = val;
        }
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return -1;
        } else {
            int val = arr[top--];
            return val;
        }
    }

    void display() {
        if (top < 0) {
            cout << "Stack is Empty\n";
        } else {
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

