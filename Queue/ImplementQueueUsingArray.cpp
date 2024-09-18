// Implement queue using array



#include<iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        } 
};

class linkedList{
    public:
        Node* head;
        Node* tail;
        int size = 0;
        linkedList(){
            head = tail = NULL;
            size = 0;
        }

        void push(int val){
            Node* temp = new Node(val);
            if(size == 0) head = tail = temp;
            else{
                tail -> next = temp;
                tail = temp;
            }
            size++;
        }

        void pop(){
            if(size <= 0){
                cout<<"List is already empty"<<endl;
                return;
            }
            Node* temp = head;
            head = head -> next;
            delete temp;
            size--;
        }
        
        int frontElement(){
            if(size <= 0){
                cout<<"List is already empty"<<endl;
                return -1;
            }
            return head->val;
        }
        
        int backElement(){
            if(size <= 0){
                cout<<"List is already empty"<<endl;
                return -1;
            }
            return tail->val;
        }
        
        int sizeOfQueue(){
            return size;
        }

        bool isEmpty(){
            return size == 0;
        }

        void display(){
            if(size <= 0){
                cout<<"List is already empty"<<endl;
                return;
            }
            Node* temp = head;
            while(temp != NULL){
                cout<<temp -> val<<" ";
                temp = temp -> next;
            }
            cout<<endl;
        }
};


int main(){
    linkedList q;
    cout<<"Queue : ";
    q.display();
    if(q.isEmpty()) cout<<"Queue is empty"<<endl;
    else cout<<"Queue is not empty"<<endl;
    q.push(10);
    q.push(20);
    cout<<"Queue : ";
    q.display();
    cout<<"Size of the queue : "<<q.sizeOfQueue()<<endl;
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"Queue : ";
    q.display();
    cout<<"Size of the queue : "<<q.sizeOfQueue()<<endl;
    q.push(60);
    cout<<"Queue : ";
    q.display();
    q.pop();
    cout<<"Queue : ";
    q.display();
    cout<<"Front element : "<<q.frontElement()<<endl;
    cout<<"Back element : "<<q.backElement()<<endl;
    cout<<"Size of the queue : "<<q.sizeOfQueue()<<endl;
    if(q.isEmpty()) cout<<"Queue is empty"<<endl;
    else cout<<"Queue is not empty"<<endl;
}