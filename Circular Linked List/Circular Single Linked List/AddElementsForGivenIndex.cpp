//  Add elements at head position




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

class CircularLinkedList{
    public:
        Node* head;
        int size;
        CircularLinkedList(){
            head = NULL;
            size = 0;
        }

        void insertAtGivenIndex(int val,int idx){
            if(idx < 0 || idx > size){
                cout<<"Index out of bounds"<<endl;
                return;
            }
            else if(head == NULL){
                Node* temp = new Node(val);
                temp->next = temp;
                head = temp;
                return;
            }
            else if(idx == 0){
                Node* temp = new Node(val);
                Node* current = head;
                while(current->next != head){
                    current = current->next;
                }
                current->next = temp;
                temp->next = head;
                head = temp;
                size++;
            }
            else if(idx == size){
                Node* t = new Node(val);
                Node* temp = head;
                while(temp->next != head){
                    temp = temp->next;
                }
                temp->next = t;
                t->next = head;
                size++;
            }
            else{
                Node* t = new Node(val);
                Node* temp = head;
                for(int i = 1;i < idx;i++){
                    temp = temp->next;
                }
                t->next = temp->next;
                temp->next = t;
                size++;
            }
        }

        void display(){
            if(head == NULL){
                cout<<"List is empty"<<endl;
                return;
            }
            Node* temp = head;
            while(true){
                cout<<temp -> val<<" ";
                temp = temp -> next;
                if(temp == head) break;
            }
            cout<<endl;
        }
};

int main(){
    CircularLinkedList CLL;
    cout<<"Before insertion : ";
    CLL.insertAtGivenIndex(10,0);
    CLL.insertAtGivenIndex(20,0);
    CLL.insertAtGivenIndex(30,0);
    CLL.display();

    cout<<"After insertion at given index position : ";
    CLL.insertAtGivenIndex(40,1);
    CLL.display();
}