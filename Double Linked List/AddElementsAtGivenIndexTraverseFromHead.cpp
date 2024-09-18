//  Add elements at given index position




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

        void insertAtGivenIndex(int val,int idx){
            if(idx < 0 || idx > size) cout<<"Invalid Position"<<endl;
            else if(idx == 0){
                Node* temp = new Node(val);
                if(size == 0) head = tail = temp;
                else{
                    temp -> next = head;
                    head -> prev = temp;
                    head = temp;
                }
            }

            else if(idx == size){
                Node* temp = new Node(val);
                if(size == 0) head = tail = temp;
                else{
                    tail -> next = temp;
                    temp -> prev = tail;
                    tail = temp;
                }
            }

            else{
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

    DLL.insertAtGivenIndex(80,0);
    DLL.insertAtGivenIndex(60,0);
    DLL.insertAtGivenIndex(50,1);
    DLL.display();

    DLL.insertAtGivenIndex(30,1);
    DLL.insertAtGivenIndex(40,3);
    DLL.display();
}