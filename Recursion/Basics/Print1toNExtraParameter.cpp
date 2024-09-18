// Print 1 to n using recursion

#include<iostream>
using namespace std;
void print(int temp,int n){
    if(temp > n) return;
    cout<<temp<<" ";
    return print(temp + 1,n);
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    print(1,n);
}