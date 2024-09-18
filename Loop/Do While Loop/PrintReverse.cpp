// Write a program to enter a number and print its reverse.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int result = 0;
    do{
        int rem = (num % 10);
        result = (result * 10) + rem;
    }while(num /= 10);
    cout<<"Result will be : "<<result;
}