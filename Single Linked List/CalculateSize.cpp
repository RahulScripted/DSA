// How to calculate the size of a linked list



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
int sizeOfLL(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }
    return count;
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

    cout<<"Size will be : "<<sizeOfLL(A);
}