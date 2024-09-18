// Question: Write a program to display the first n terms of the Fibonacci series.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n no. of terms : ";
    cin>>n;
    int a = 0,b = 1;
    cout<<a<<" "<<b<<" ";
    while(n > 2){
        int c = a + b;
        a = b;
        b = c;
        cout<<c<<" ";
        n--;
    }
}