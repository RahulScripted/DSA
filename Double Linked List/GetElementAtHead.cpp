// Get element at index



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

        int getElementAtHead(){
            return head->val;
        }
};

int main(){
    DoubleLinkedList DLL;

    cout<<"After adding at head : ";
    DLL.insertAtHead(10);
    DLL.insertAtHead(20);
    DLL.insertAtHead(30);
    DLL.insertAtHead(40);
    DLL.insertAtHead(50);

    cout<<"Value at head position : ";
    cout<<DLL.getElementAtHead();
}