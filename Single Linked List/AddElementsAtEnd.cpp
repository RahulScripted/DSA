// Implement new linked-list class



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
    LL.insertAtEnd(10);
    LL.display();
    // cout<<LL.size<<endl; // Size Printing
    
    LL.insertAtEnd(20);
    LL.insertAtEnd(30);
    LL.display();
    // cout<<LL.size<<endl; // Size Printing
    
    LL.insertAtEnd(40);
    LL.insertAtEnd(50);
    LL.insertAtEnd(60);
    LL.display();
    // cout<<LL.size<<endl; // Size Printing
}