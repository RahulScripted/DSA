// Design your implementation of the circular queue. The circular queue is a linear data structure in which the operations are performed based on FIFO (First In First Out) principle, and the last position is connected back to the first position to make a circle. It is also called "Ring Buffer".

// One of the benefits of the circular queue is that we can make use of the spaces in front of the queue. In a normal queue, once the queue becomes full, we cannot insert the next element even if there is a space in front of the queue. But using the circular queue, we can use the space to store new values.

// Implement the MyCircularQueue class:

// MyCircularQueue(k) Initializes the object with the size of the queue to be k.

// 1.   int Front() Gets the front item from the queue. If the queue is empty, return -1.

// 2.   int Rear() Gets the last item from the queue. If the queue is empty, return -1.

// 3.   boolean enQueue(int value) Inserts an element into the circular queue. Return true if the operation is successful.

// 4.   boolean deQueue() Deletes an element from the circular queue. Return true if the operation is successful.

// 5.   boolean isEmpty() Checks whether the circular queue is empty or not.

// 6.   boolean isFull() Checks whether the circular queue is full or not.

// You must solve the problem without using the built-in queue data structure in your programming language. 





#include<bits/stdc++.h>
using namespace std;

class MyCircularQueue {
public:
    vector<int> arr;
    int front;
    int back;
    int capacity;
    int size;

    MyCircularQueue(int k) {
        arr.resize(k);
        front = 0;
        back = 0;
        size = 0;
        capacity = k;
    }

    bool enQueue(int value) {
        if (size == capacity) return false; // Queue is full
        arr[back] = value;
        back = (back + 1) % capacity;
        size++;
        return true;
    }

    bool deQueue() {
        if (size == 0) return false; // Queue is empty
        front = (front + 1) % capacity;
        size--;
        return true;
    }

    int Front() {
        if (size == 0) return -1; // Queue is empty
        return arr[front];
    }

    int Rear() {
        if (size == 0) return -1; // Queue is empty
        return arr[(back - 1 + capacity) % capacity];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }
};

// Testing the MyCircularQueue class
int main() {
    MyCircularQueue* queue = new MyCircularQueue(3); // Create a queue of capacity 3

    // Test enQueue
    cout << "Enqueue 1: " << queue->enQueue(1) << endl; // true
    cout << "Enqueue 2: " << queue->enQueue(2) << endl; // true
    cout << "Enqueue 3: " << queue->enQueue(3) << endl; // true
    cout << "Enqueue 4: " << queue->enQueue(4) << endl; // false (queue is full)

    // Test Front and Rear
    cout << "Front: " << queue->Front() << endl; // 1
    cout << "Rear: " << queue->Rear() << endl; // 3

    // Test deQueue
    cout << "Dequeue: " << queue->deQueue() << endl; // true

    // Test Front and Rear again
    cout << "Front: " << queue->Front() << endl; // 2
    cout << "Rear: " << queue->Rear() << endl; // 3

    // Test enQueue again
    cout << "Enqueue 4: " << queue->enQueue(4) << endl; // true

    // Test Full status
    cout << "Is full: " << queue->isFull() << endl; // true

    // Test deQueue and isEmpty
    cout << "Dequeue: " << queue->deQueue() << endl; // true
    cout << "Dequeue: " << queue->deQueue() << endl; // true
    cout << "Dequeue: " << queue->deQueue() << endl; // true
    cout << "Is empty: " << queue->isEmpty() << endl; // true

    delete queue;
    return 0;
}