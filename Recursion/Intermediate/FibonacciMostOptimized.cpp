// Write a C++ program to print the nth fibonacci term

#include<iostream>
using namespace std;
// Time Complexity -> 0(n) ; Space Complexity -> 0(1)
int fibo(int n){
    int prev1 = 0,prev2 = 1;
    for(int i = 2;i <= n;i++){
        int temp = prev1 + prev2;
        prev1 = prev2;
        prev2 = temp; 
    }
    return prev2;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<n<<"th fibonacci term : "<<fibo(n);
}