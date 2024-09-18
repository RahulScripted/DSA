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

        void insertAtTail(int val){
            Node* temp = new Node(val);
            if(size == 0) head = tail = temp;
            else{
                tail -> next = temp;
                temp -> prev = tail;
                tail = temp;
            }
            size++;
        }

        void insertAtGivenIndex(int val,int idx){
            if(idx < 0 || idx > size) cout<<"Invalid Position"<<endl;
            else if(idx == 0) insertAtHead(val);
            else if(idx == size) insertAtTail(val);
            else{
                int whereToStart =  size / 2;
                if(idx <= whereToStart){
                    // cout<<"Traverse from head"<<endl;
                    Node* temp = new Node(val);
                    Node* t = head;
                    for(int i = 1;i <= (idx - 1);i++){
                        t = t -> next;
                    }
                    temp -> next = t -> next;
                    t->next = temp;
                    temp->prev = t;
                    temp->next->prev = temp;
                }
                else{
                    // cout<<"Traverse from tail"<<endl;
                    Node* temp = new Node(val);
                    Node* t = tail;
                    for(int i = (size - 1);i > idx;i--){
                        t = t->prev;
                    }
                    temp->prev = t->prev;
                    t->prev = temp;
                    temp->next = t;
                    temp->prev->next = temp;
                }
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
                    if(idx < (size / 2)){
                        Node* temp = head;
                        for(int i = 1;i < idx;i++){
                            temp = temp->next;
                        }
                        temp->next = temp->next->next;
                        temp->next->prev = temp;
                    }
                    else{
                        Node* temp = tail;
                        for(int i = 1;i < (size - idx - 1);i++){
                            temp = temp->prev;
                        }
                        temp->prev = temp->prev->prev;
                        temp->prev->next = temp;
                    }
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

    cout<<"Before insertion : ";
    DLL.display();
    
    cout<<endl;

    cout<<"After adding at head : ";
    DLL.insertAtHead(10);
    DLL.insertAtHead(20);
    DLL.insertAtHead(30);
    DLL.display();

    cout<<endl;

    cout<<"After adding at tail : ";
    DLL.insertAtTail(40);
    DLL.insertAtTail(50);
    DLL.insertAtTail(60);
    DLL.display();
    
    cout<<endl;

    cout<<"After adding at given index : ";
    DLL.insertAtGivenIndex(70,3);
    DLL.insertAtGivenIndex(80,1);
    DLL.insertAtGivenIndex(90,6);
    DLL.display();
    
    cout<<endl;

    cout<<"Before deletion : ";
    DLL.display();
    
    cout<<endl;

    cout<<"After deleting from head : ";
    DLL.deleteAtHead();
    DLL.display();

    cout<<endl;

    cout<<"After deleting from tail: ";   
    DLL.deleteAtTail();
    DLL.display();

    cout<<endl;

    cout<<"After deleting from given index 5 : ";
    DLL.deleteFromGivenIndex(5);
    DLL.display();
}