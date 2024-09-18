// Question: Write a program to accept two integers and check whether they are equal or not.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    if(num1 == num2){
        cout<<num1<<" is equal to "<<num2;
    }
    else{
        cout<<num2<<" is not equal to "<<num1;
    }
}