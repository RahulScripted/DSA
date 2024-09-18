// Implement circular queue using array



#include <iostream>
#include <vector>
using namespace std;

class Queue {
public:
    vector<int> arr;
    int front;
    int back;
    int capacity;
    int size;

    Queue(int k) : arr(k), front(0), back(0), capacity(k), size(0) {}

    void push(int num) {
        if (size == capacity) {
            cout << "Queue is full" << endl;
            return;
        }
        arr[back] = num;
        back = (back + 1) % capacity;
        size++;
    }

    void pop() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        front = (front + 1) % capacity;
        size--;
    }

    int frontElement() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    int backElement() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[(back - 1 + capacity) % capacity];
    }

    int queueSize() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }

    void display() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        int i = front;
        for (int count = 0; count < size; count++) {
            cout << arr[i] << " ";
            i = (i + 1) % capacity;
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);
    cout << "Queue : ";
    q.display();
    if (q.isEmpty()) cout << "Queue is empty" << endl;
    else cout << "Queue is not empty" << endl;
    q.push(10);
    q.push(20);
    cout << "Queue : ";
    q.display();
    cout << "Size of the queue : " << q.queueSize() << endl;
    q.push(30);
    q.push(40);
    q.push(50);
    cout << "Queue : ";
    q.display();
    cout << "Size of the queue : " << q.queueSize() << endl;
    q.push(60); // This will show that the queue is full
    cout << "Queue : ";
    q.display();
    q.pop();
    cout << "Queue : ";
    q.display();
    cout << "Front element : " << q.frontElement() << endl;
    cout << "Back element : " << q.backElement() << endl;
    cout << "Size of the queue : " << q.queueSize() << endl;
    if (q.isEmpty()) cout << "Queue is empty" << endl;
    else cout << "Queue is not empty" << endl;
}