// Delete an element from tail from a linked list



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
class linkedList{
    public:
        Node* head;
        Node* tail;
        int size = 0;
        linkedList(){
            head = tail = NULL;
            size = 0;
        }

        void insertAtHead(int val){
            Node* temp = new Node(val);
            if(size == 0) head = tail = temp;
            else{
                temp -> next = head;
                head = temp;
            }
            size++;
        }

        void deleteFromTail(){
            if(size <= 0){
                cout<<"List is already empty"<<endl;
                return;
            }

            Node* temp = head;
            while(temp -> next != tail){
                temp = temp->next;
            }

            tail = temp;
            tail->next = NULL;
            size--;
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
    linkedList LL;

    LL.insertAtHead(30);
    LL.insertAtHead(70);
    LL.insertAtHead(20);
    LL.insertAtHead(80);
    LL.display();

    cout<<"After deleting tail element : ";
    LL.deleteFromTail();
    LL.display();
}