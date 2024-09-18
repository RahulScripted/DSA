// Implement queue using array



#include<iostream>
#include<vector>
using namespace std;

class Queue{
public:
    vector<int>arr;
    int front;
    int back;
    Queue(){
        front = back = 0;
    }
    void push(int num){
        arr.push_back(num);
        back++;
    }
    void pop(){
        if(back - front == 0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        front++;
    }
    int frontElement(){
        if(back - front == 0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }
    int BackElement(){
        if(back - front == 0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[back - 1];
    }
    int size(){
        return (back - front);
    }
    bool isEmpty(){
        return back == front;
    }
    void display(){
        for(int i = front;i < back;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Queue q;
    cout<<"Queue : ";
    q.display();
    if(q.isEmpty()) cout<<"Queue is empty"<<endl;
    else cout<<"Queue is not empty"<<endl;
    q.push(10);
    q.push(20);
    cout<<"Queue : ";
    q.display();
    cout<<"Size of the queue : "<<q.size()<<endl;
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"Queue : ";
    q.display();
    cout<<"Size of the queue : "<<q.size()<<endl;
    q.push(60);
    cout<<"Queue : ";
    q.display();
    q.pop();
    cout<<"Queue : ";
    q.display();
    cout<<"Front element : "<<q.frontElement()<<endl;
    cout<<"Back element : "<<q.BackElement()<<endl;
    cout<<"Size of the queue : "<<q.size()<<endl;
    if(q.isEmpty()) cout<<"Queue is empty"<<endl;
    else cout<<"Queue is not empty"<<endl;
    
}