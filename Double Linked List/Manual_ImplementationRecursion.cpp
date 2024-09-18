// Display a doubly linked list recursively




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

void display(Node* head){
    if(head == NULL) return;
    cout<<head->val<<" ";
    display(head->next);
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    // Next
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // Prev
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;

    cout<<"Linked List : ";
    display(a);
}