// Write a C++ program to print the nth fibonacci term

#include<iostream>
using namespace std;
// Time Complexity -> 0(2^n) ; Space Complexity -> 0(1)
int fibo(int n){
    if(n == 0 || n == 1) return n;
    return fibo(n - 1) + fibo(n - 2);
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<n<<"th fibonacci term : "<<fibo(n);
}