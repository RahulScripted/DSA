// Question: Write a program to display the first n terms of the Fibonacci series.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n no. of terms : ";
    cin>>n;
    int a = 0,b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 0;i < (n - 2);i++){
        int c = a + b;
        a = b;
        b = c;
        cout<<c<<" ";
    }
}