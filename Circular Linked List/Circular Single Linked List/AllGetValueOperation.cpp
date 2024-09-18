// All get value operation



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

        void insertAtHead(int val){
            Node* temp = new Node(val);
            if(head == NULL){
                temp->next = temp;
                head = temp;
                return;
            }
            Node* current = head;
            while(current->next != head){
                current = current->next;
            }
            current->next = temp;
            temp->next = head;
            head = temp;
            size++;
        }
        
        int getValueAtHead(){
            return head->val;
        }

        int getValueAtTail(){
            Node* temp = head;
            while(temp->next != head){
                temp = temp->next;
            }
            return temp->val;
        }

        int getValueAtGivenIndex(int idx){
            if(idx < 0 || idx > size){
                cout<<"Index out of bounds";
                return -1;
            }
            else if(idx == 0) getValueAtHead();
            else if(idx == size) getValueAtTail();
            else{
                Node* temp = head;
                for(int i = 0;i < idx;i++){
                    temp = temp->next;
                }
                return temp->val;
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

    CLL.insertAtHead(10);
    CLL.insertAtHead(20);
    CLL.insertAtHead(30);
    CLL.insertAtHead(40);
    cout<<"Our Linked list : ";
    CLL.display();

    cout<<"Value at 2nd position : "<<CLL.getValueAtGivenIndex(2)<<endl;

    cout<<"Value at head position : "<<CLL.getValueAtHead()<<endl;
    
    cout<<"Value at tail position : "<<CLL.getValueAtTail()<<endl;
}