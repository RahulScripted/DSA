// Question: Take two int values from user and print greatest among them.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    num1 > num2 ? cout<<num1<<" is greater than "<<num2 : cout<<num2<<" is greater than "<<num1;
}