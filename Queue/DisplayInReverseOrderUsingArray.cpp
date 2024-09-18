// Display queue in reverse order using array


#include<iostream>
#include<queue>
using namespace std;

void display(queue<int>&q){
    int n = q.size();
    for(int i = 0;i < n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void displayRev(queue<int>&q){
    int n = q.size();
    int arr[n];
    int i = 0;

    while(n--){
        int x = q.front();
        q.pop();
        arr[i++] = x;
    }

    int size = sizeof(arr) / sizeof(arr[0]);
    for(int j = (size - 1);j >= 0;j--){
        int x = arr[j];
        q.push(x);
    }
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    display(q);
    displayRev(q);
    display(q);
}