// Write a C program to find power of any number

#include<iostream>
#include<cmath>
using namespace std;

int Power(int num,int powers){
    return pow(num,powers);
}
int main(){
    int num,pow;
    cout<<"Enter number : ";
    cin>>num;
    cout<<"Enter power : ";
    cin>>pow;
    cout<<"Power will be : "<<Power(num,pow);
}