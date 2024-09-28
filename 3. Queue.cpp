#define SIZE 100
#include <iostream>
using namespace std;

class Queue {
private:
    int arr[SIZE], front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int val) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow\n";
        } else {
            if (front == -1) front = 0;
            arr[++rear] = val;
        }
    }

    int dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
            return -1;
        } else {
            return arr[front++];
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is Empty\n";
        } else {
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
