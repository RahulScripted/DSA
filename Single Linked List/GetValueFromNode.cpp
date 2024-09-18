// How to declare linked list in C++


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
    cout<<A.val; // 10
}