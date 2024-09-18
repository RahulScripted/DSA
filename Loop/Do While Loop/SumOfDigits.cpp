// Write a program to calculate sum of digits of a number.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int result = 0;
    do{
        int rem = (num % 10);
        result += rem;
    }while(num /= 10);
    cout<<"Result will be : "<<result;
}