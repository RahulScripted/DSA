//  Delete elements from tail position




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

class DoubleLinkedList{
    public:
        Node* head;
        Node* tail;
        int size = 0;
        DoubleLinkedList(){
            head = tail = NULL;
            size = 0;
        }

        void insertAtHead(int val){
            Node* temp = new Node(val);
            if(size == 0) head = tail = temp;
            else{
                temp -> next = head;
                head -> prev = temp;
                head = temp;
            }
            size++;
        }

        void deleteAtTail(){
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
    DoubleLinkedList DLL;

    DLL.insertAtHead(80);
    DLL.insertAtHead(60);
    DLL.insertAtHead(30);
    DLL.insertAtHead(40);
    cout<<"Before deleting : ";
    DLL.display();
    cout<<"After deleting : ";
    DLL.deleteAtTail();
    DLL.display();
}