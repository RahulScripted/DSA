//  Get value at head position




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
    CLL.display();

    cout<<"Value at head position : "<<CLL.getValueAtHead();
}