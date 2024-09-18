//  Delete elements from given index position




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
        void deleteAtHead(){
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

        void deleteFromGivenIndex(int idx){
            if(size == 0){
                cout<<"Can't delete as linked list is already empty"<<endl;
                return;
            }
            else if(idx < 0 || idx > size){
                cout<<"Can't delete as linked list is already empty"<<endl;
                return;
            }
            else{
                if(idx == 0) deleteAtHead();
                else if(idx == size) deleteAtTail();
                else{
                    Node* temp = head;
                    for(int i = 1;i < idx;i++){
                        temp = temp->next;
                    }
                    temp->next = temp->next->next;
                    temp->next->prev = temp;
                }
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
    DoubleLinkedList DLL;

    DLL.insertAtHead(80);
    DLL.insertAtHead(60);
    DLL.insertAtHead(30);
    DLL.insertAtHead(40);
    DLL.insertAtHead(70);
    DLL.insertAtHead(10);
    DLL.insertAtHead(90);
    cout<<"Before deleting : ";
    DLL.display();
    cout<<"After deleting : ";
    DLL.deleteFromGivenIndex(3);
    DLL.display();
}