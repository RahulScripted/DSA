// Print the sum of 1 to n using recursion

#include<iostream>
using namespace std;
int sum(int n){
    int addition = 0;
    if(n == 1) return 1; // Base Case
    return n + sum(n - 1);
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Sum will be : "<<sum(n);
}