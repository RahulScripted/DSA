// Implement custom deque using doubly linked list



#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        } 
};

class Dequeue{
    public:
        Node* head;
        Node* tail;
        int size;
        Dequeue(){
            head = tail = NULL;
            size = 0;
        }

        void push_front(int val){
            Node* temp = new Node(val);
            if(size == 0) head = tail = temp;
            else{
                temp -> next = head;
                head -> prev = temp;
                head = temp;
            }
            size++;
        }

        void push_back(int val){
            Node* temp = new Node(val);
            if(size == 0) head = tail = temp;
            else{
                tail -> next = temp;
                temp -> prev = tail;
                tail = temp;
            }
            size++;
        }

        void pop_front(){
            if(size == 0){
                cout<<"Can't delete as linked list is already empty"<<endl;
                return;
            }
            else if(size == 1){
                head = head -> next;
                tail = head;
            }
            else{
                head = head->next;
                head->prev = NULL;
            }
            size--;
        }

        void pop_back(){
            if(size == 0){
                cout<<"Can't delete as linked list is already empty"<<endl;
                return;
            }
            else if(size == 1){
                head = head -> next;
                tail = head;
            }
            else{
                Node* temp = tail -> prev;
                temp->next = NULL;
                tail = temp;
            }
            size--;
        }

        // Get the front element of the queue
        int front() {
            if (empty()) {
                cout << "Queue is empty" << endl;
                return -1;
            }
            return head->val;
        }

        // Get the back element of the queue
        int back() {
            if (empty()) {
                cout << "Queue is empty" << endl;
                return -1;
            }
            return tail->val;
        }
        int sizeOfDequeue(){
            return size;
        }

        bool empty(){
            return size == 0;
        }
        
        void display(){
            Node* temp = head;
            while(temp != NULL){
                cout<<temp -> val<<" ";
                temp = temp -> next;
            }
            cout<<endl;
        }
};

int main(){
    Dequeue dq;

    // Push front
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);
    dq.push_front(40);

    cout<<"After inserting at front : ";
    dq.display();

    // Push back
    dq.push_back(50);
    dq.push_back(60);
    dq.push_back(70);
    dq.push_back(80);

    cout<<"After inserting at back : ";
    dq.display();

    // Pop front
    dq.pop_front();
    cout<<"After deleting at front : ";
    dq.display();

    // Pop back
    dq.pop_back();
    cout<<"After deleting at back : ";
   dq.display();

    // Pop back
    cout<<"Size : "<<dq.sizeOfDequeue()<<endl;

    // Accessing front element
    cout<<"Front element : "<<dq.front()<<endl;

    // Accessing back element
    cout<<"Back element : "<<dq.back()<<endl;

    //  Empty or not
    cout<<"Is deque empty : "<<dq.empty()<<endl; // 0 means false 1 means true
}