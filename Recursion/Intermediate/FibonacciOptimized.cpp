// Write a C++ program to print the nth fibonacci term

#include<iostream>
using namespace std;
// Time Complexity -> 0(n) ; Space Complexity -> 0(n)
int fibo(int n){ 
    int arr[n + 2];
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2;i <= n;i++){
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<n<<"th fibonacci term : "<<fibo(n);
}