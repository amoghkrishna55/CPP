#include <iostream>
#include <stack>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        next = NULL;
    }
};

class Queue {
public:
    Node* front, * rear;

    Queue() {
        front = NULL;
        rear = NULL;
    }

    void enQueue(int val) {
        Node* n = new Node(val);
        if (rear == NULL) {
            front = rear = n;
            return;
        }
        rear->next = n;
        rear = n;
    }

    void deQueue() {
        if (front == NULL) {
            return;
        }

        Node* toDel = front;
        front = front->next;

        if (front == NULL) {
            rear = NULL;
        }

        delete toDel;
    }

    bool empty() {
        return (front == NULL && rear == NULL);
    }

void reverse() {
    stack<int> stack;
    while (!empty()) {
        stack.push(getFront());
        deQueue();
    }
    while (!stack.empty()) {
        enQueue(stack.top());
        stack.pop();
    }
}

    int getFront() {
        if (front != NULL) {
            return front->val;
        }
        else {
            return -1;
        }
    }
};

int main() {
    Queue q;
    int a, b;
    cin >> a;
    while (a--) {
        cin >> b;
        if (b == -1) {
            break;
        }
        q.enQueue(b);
    }

    q.reverse(); // Reverse the queue only once before entering the loop

    while (!q.empty()) {
        cout << q.getFront() << " ";
        q.deQueue(); // Dequeue the elements from the reversed queue
    }

    return 0;
}
