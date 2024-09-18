// Write a C program to print multiplication table of any number.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int i = 1;
    do{
       cout<<num<<" x "<<i<<" = "<<(num * i)<<endl;
       i++;
    }while(i <= 10);
}