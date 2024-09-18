// Implement all insert and delete operations from linked-list




#include<bits/stdc++.h>
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

        void insertAtEnd(int val){
            Node* temp = new Node(val);
            if(size == 0) head = tail = temp;
            else{
                tail -> next = temp;
                tail = temp;
            }
            size++;
        }

        void insertAtHead(int val){
            Node* temp = new Node(val);
            if(size == 0) head = tail = temp;
            else{
                temp -> next = head;
                head = temp;
            }
            size++;
        }

        void insertAtAnyIndex(int idx,int val){
            if(idx < 0 || idx > size) cout<<"Invalid"<<endl;

            else if(idx == 0) insertAtHead(val);
            else if(idx == size) insertAtEnd(val);

            else{
                Node* t = new Node(val);
                Node* temp = head;

                for(int i = 1;i <= (idx - 1);i++){
                    temp = temp -> next;
                }

                t -> next = temp -> next;
                temp -> next = t;
                size++;
            }
        }

        void deleteFromHead(){
            if(size <= 0){
                cout<<"List is already empty"<<endl;
                return;
            }
            head = head -> next;
            size--;
        }

        void deleteFromTail(){
            if(size <= 0){
                cout<<"List is already empty"<<endl;
                return;
            }

            Node* temp = head;
            while(temp -> next != tail){
                temp = temp->next;
            }

            tail = temp;
            tail->next = NULL;
            size--;
        }

        void deleteFromAnyIndex(int idx){
            if(idx < 0 || idx >= size){
                cout<<"Out of bounds"<<endl;
                return;
            }

            else if(idx == 0) deleteFromHead();
            else if(idx == (size - 1)) deleteFromTail();

            else{
                Node* temp = head;
                for(int i = 1;i <= (idx - 1);i++){
                    temp = temp -> next;
                }

                temp -> next = temp -> next -> next;
                size--;
            }
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
    linkedList LL;

    cout<<"Linked list : ";
    LL.insertAtHead(30);
    LL.insertAtHead(70);
    LL.insertAtHead(45);
    LL.display();


    cout<<"Linked list : ";
    LL.insertAtEnd(32);
    LL.insertAtEnd(42);
    LL.insertAtEnd(72);
    LL.display();

    cout<<"Linked list : ";
    LL.insertAtAnyIndex(2,10);
    LL.insertAtAnyIndex(3,10);
    LL.insertAtAnyIndex(1,80);
    LL.display();

    cout<<"Linked list : ";
    LL.deleteFromHead();
    LL.deleteFromHead();
    LL.display();

    cout<<"Linked list : ";
    LL.deleteFromTail();
    LL.deleteFromTail();
    LL.display();

    cout<<"Linked list : ";
    LL.deleteFromAnyIndex(2);
    LL.deleteFromAnyIndex(3);
    LL.display();
}