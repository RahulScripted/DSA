// Display reverse linked list recursively



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
void display(Node* head){
    if(head == NULL) return;
    display(head->next);
    cout<<head->val<<" ";
}

int main(){
    Node* A = new Node(10);
    Node* B = new Node(20);
    Node* C = new Node(30);
    Node* D = new Node(40);

    // Linking
    A->next = B;
    B->next = C;
    C->next = D;

    display(A);
}