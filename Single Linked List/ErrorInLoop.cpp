// Error in loop in linked list



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
int main(){
    Node A(10);
    Node B(20);
    Node C(30);
    Node D(40); 

    // Linking
    A.next = &B;
    B.next = &C;
    C.next = &D;

    Node temp = A; // temp has everything present in A

    while(temp.next != NULL){
        cout<<temp.val<<" ";
        temp = *(temp.next);
    }
}