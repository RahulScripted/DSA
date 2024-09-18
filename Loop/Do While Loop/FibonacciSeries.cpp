// Write a program to print Fibonacci series up to n terms.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int a = 0,b = 1;
    cout<<"Fibonacci series : "<<a<<" "<<b<<" ";
    do{
        int c = (a + b);
        a = b;
        b = c;
        cout<<c<<" ";
    }while(b <= num);
}