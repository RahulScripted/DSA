// Delete an element from any index from a linked list



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
        
        void deleteFromHead(){
            if(size <= 0){
                cout<<"List is already empty"<<endl;
                return;
            }
            head = head -> next;
            size--;
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

        void deleteFromAnyIndex(int idx){
            if(idx < 0 || idx >= size){
                cout<<"Out of bounds"<<endl;
                return;
            }

            else if(idx == 0) deleteFromHead();
            else if(idx == (size - 1)) deleteFromTail();

            else{
                Node* temp = head;
                for(int i = 1;i <= (idx - 1);i++){
                    temp = temp -> next;
                }

                temp -> next = temp -> next -> next;
                size--;
            }
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
    LL.insertAtHead(40);
    LL.insertAtHead(10);
    LL.insertAtHead(90);
    LL.display();

    cout<<"After deleting head element : ";
    LL.deleteFromHead();
    LL.display();

    cout<<"After deleting tail element : ";
    LL.deleteFromTail();
    LL.display();

    cout<<"After deleting any index element : ";
    LL.deleteFromAnyIndex(2);
    LL.display();
}