//  All insertion operation




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

    // Insert At head
    DLL.insertAtHead(30);
    DLL.insertAtHead(10);
    DLL.insertAtHead(20);
    DLL.display();

    // Insert At tail
    DLL.insertAtTail(40);
    DLL.insertAtTail(60);
    DLL.insertAtTail(50);
    DLL.display();

    // Insert At given index
    DLL.insertAtGivenIndex(70,2);
    DLL.insertAtGivenIndex(90,4);
    DLL.insertAtGivenIndex(80,6);
    DLL.insertAtGivenIndex(17,1);
    DLL.insertAtGivenIndex(27,5);
    DLL.display();
}