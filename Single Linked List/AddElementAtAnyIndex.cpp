// Add any elements at any index



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

        void insertAtAnyIndex(int idx,int val){
            if(idx < 0 || idx > size) cout<<"Invalid"<<endl;

            else if(idx == 0){
                Node* temp = new Node(val);
                if(size == 0) head = tail = temp;
                else{
                    temp -> next = head;
                    head = temp;
                }
                size++;
            }
            
            else if(idx == size){
                Node* temp = new Node(val);
                if(size == 0) head = tail = temp;
                else{
                    tail -> next = temp;
                    tail = temp;
                }
                size++;
            }

            else{
                Node* t = new Node(val);
                Node* temp = head;

                for(int i = 1;i <= (size - 1);i++){
                    temp = temp -> next;
                }

                t -> next = temp -> next;
                temp -> next = t;
                size++;
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

    LL.insertAtAnyIndex(0,30);
    LL.insertAtAnyIndex(0,80);
    LL.insertAtAnyIndex(2,50);
    LL.insertAtAnyIndex(3,10);
    LL.display();
}