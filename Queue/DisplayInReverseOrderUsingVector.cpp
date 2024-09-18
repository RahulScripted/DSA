// Display queue in reverse order using vector


#include<iostream>
#include<queue>
#include<vector>
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
    vector<int>v;
    int n = q.size();

    while(n--){
        int x = q.front();
        q.pop();
        v.push_back(x);
    }

    for(int i = (v.size() - 1);i >= 0;i--){
        int x = v[i];
        v.pop_back();
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