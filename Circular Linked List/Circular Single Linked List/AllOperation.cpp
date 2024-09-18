// All  operation performed on linked list




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

        void insertAtTail(int val){
            Node* t = new Node(val);
            Node* temp = head;
            if(head == NULL) insertAtHead(val);
            while(temp->next != head){
                temp = temp->next;
            }
            temp->next = t;
            t->next = head;
            size++;
        }
        void insertAtGivenIndex(int val,int idx){
            if(idx < 0 || idx > size){
                cout<<"Index out of bounds"<<endl;
                return;
            }
            else if(idx == 0) insertAtHead(val);
            else if(idx == size) insertAtTail(val);
            else{
                Node* t = new Node(val);
                Node* temp = head;
                for(int i = 1;i < idx;i++){
                    temp = temp->next;
                }
                t->next = temp->next;
                temp->next = t;
                size++;
            }
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

        int getValueAtHead(){
            return head->val;
        }

        int getValueAtTail(){
            Node* temp = head;
            while(temp->next != head){
                temp = temp->next;
            }
            return temp->val;
        }

        int getValueAtGivenIndex(int idx){
            if(idx < 0 || idx > size){
                cout<<"Index out of bounds";
                return -1;
            }
            else if(idx == 0) getValueAtHead();
            else if(idx == size) getValueAtTail();
            else{
                Node* temp = head;
                for(int i = 0;i < idx;i++){
                    temp = temp->next;
                }
                return temp->val;
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
    cout<<"Before insertion at beginning : ";
    CLL.insertAtHead(10);
    CLL.insertAtHead(20);
    CLL.insertAtHead(30);
    CLL.display();

    cout<<"Before insertion at Tail : ";
    CLL.insertAtTail(40);
    CLL.insertAtTail(50);
    CLL.insertAtTail(60);
    CLL.display();

    cout<<"After insertion at given index position : ";
    CLL.insertAtGivenIndex(70,2);
    CLL.insertAtGivenIndex(80,5);
    CLL.display();

    cout<<"After deletion at head : ";
    CLL.deleteAtHead();
    CLL.display();

    cout<<"After deletion at tail : ";
    CLL.deleteAtTail();
    CLL.display();

    cout<<"After deletion at 2nd position : ";
    CLL.deleteAtGivenIndex(2);
    CLL.display();

    cout<<"Value at head position : "<<CLL.getValueAtHead()<<endl;

    cout<<"Value at tail position : "<<CLL.getValueAtTail()<<endl;

    cout<<"Value at 3rd position : "<<CLL.getValueAtGivenIndex(3)<<endl;
}