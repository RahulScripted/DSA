// Print the sum of 1 to n using recursion

#include<iostream>
using namespace std;
int sum(int temp,int n){
    if(temp == n) return n;
    return temp + sum(temp + 1,n);
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Sum will be : "<<sum(1,n);
}