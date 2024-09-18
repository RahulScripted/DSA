// Write a program to find all factors of a number.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int fact = 1;
    do{
        fact *= num;
        num--;
    }while(num > 1);
    cout<<"Factorial will be : "<<fact;
}