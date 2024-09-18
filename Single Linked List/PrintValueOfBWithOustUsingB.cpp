// Print value of B without using B


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

    cout<<(A.next)->val<<" ";
    cout<<B.val<<" ";
}