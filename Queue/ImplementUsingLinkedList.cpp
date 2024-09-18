// Implement queue using array



#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class Queue {
private:
    Node* front;  // Pointer to the front node
    Node* back;   // Pointer to the back node
    int queueSize; // To keep track of the size of the queue

public:
    Queue() : front(nullptr), back(nullptr), queueSize(0) {}

    // Add an element to the back of the queue
    void push(int num) {
        Node* newNode = new Node(num);
        if (back) {
            back->next = newNode;
        } else {
            front = newNode;
        }
        back = newNode;
        queueSize++;
    }

    // Remove an element from the front of the queue
    void pop() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == nullptr) {
            back = nullptr;
        }
        delete temp;
        queueSize--;
    }

    // Get the front element of the queue
    int frontElement() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->val;
    }

    // Get the back element of the queue
    int BackElement() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return back->val;
    }

    // Get the size of the queue
    int size() {
        return queueSize;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Display the elements of the queue
    void display() {
        Node* current = front;
        while (current) {
            cout << current->val << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Destructor to clean up memory
    ~Queue() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    Queue q;
    cout << "Queue: ";
    q.display();
    if (q.isEmpty()) cout << "Queue is empty" << endl;
    else cout << "Queue is not empty" << endl;
    
    q.push(10);
    q.push(20);
    cout << "Queue: ";
    q.display();
    cout << "Size of the queue: " << q.size() << endl;
    
    q.push(30);
    q.push(40);
    q.push(50);
    cout << "Queue: ";
    q.display();
    cout << "Size of the queue: " << q.size() << endl;
    
    q.push(60);
    cout << "Queue: ";
    q.display();
    
    q.pop();
    cout << "Queue: ";
    q.display();
    cout << "Front element: " << q.frontElement() << endl;
    cout << "Back element: " << q.BackElement() << endl;
    cout << "Size of the queue: " << q.size() << endl;
    
    if (q.isEmpty()) cout << "Queue is empty" << endl;
    else cout << "Queue is not empty" << endl;
}