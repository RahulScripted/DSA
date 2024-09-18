//  All delete operations




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

class CircularLinkedList{
    public:
        Node* head;
        int size;
        CircularLinkedList(){
            head = NULL;
            size = 0;
        }

        void insertAtHead(int val){
            Node* temp = new Node(val);
            if(head == NULL){
                temp->next = temp;
                head = temp;
                return;
            }
            Node* current = head;
            while(current->next != head){
                current = current->next;
            }
            current->next = temp;
            temp->next = head;
            head = temp;
            size++;
        }

        void deleteAtHead(){
            Node* temp = head;
            while(temp->next != head){
                temp = temp->next;
            }
            head = head->next;
            temp->next = head;
            size--;
        }

        void deleteAtTail(){
            Node* temp = head;
            while(temp->next->next != head){
                temp = temp->next;
            }
            temp->next = head;
            size--;
        }

        void deleteAtGivenIndex(int idx){
            if(idx < 0 || idx > size){
                cout<<"Index out of bounds"<<endl;
                return;
            }
            else if(idx == 0) deleteAtHead();
            else if(idx == size) deleteAtTail(); 
            else{
                Node* temp = head;
                for(int i = 0;i < (idx - 1);i++){
                    temp = temp->next;
                }
                Node* needToDelete = temp->next;
                temp->next = needToDelete->next;
                size--;
            }
        }

        void display(){
            if(head == NULL){
                cout<<"List is empty"<<endl;
                return;
            }
            Node* temp = head;
            while(true){
                cout<<temp -> val<<" ";
                temp = temp -> next;
                if(temp == head) break;
            }
            cout<<endl;
        }
};

int main(){
    CircularLinkedList CLL;

    cout<<"Before Deletion : ";
    CLL.insertAtHead(10);
    CLL.insertAtHead(20);
    CLL.insertAtHead(30);
    CLL.insertAtHead(40);
    CLL.insertAtHead(50);
    CLL.insertAtHead(60);
    CLL.insertAtHead(70);
    CLL.display();

    cout<<"After Deletion from Head : ";
    CLL.deleteAtHead();
    CLL.display();

    cout<<"After Deletion from Tail : ";
    CLL.deleteAtTail();
    CLL.display();
    
    cout<<"After Deletion from given index : ";
    CLL.deleteAtGivenIndex(2);
    CLL.display();
}