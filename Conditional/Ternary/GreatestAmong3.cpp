// Question: Write a program to find the largest of three numbers.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"Enter the third number : ";
    cin>>num3;
    (num1 > num2 && num1 > num3) ? cout<<num1<<" is greatest" : num2 > num3 ? cout<<num2<<" is greatest" : cout<<num3<<" is greatest";
}