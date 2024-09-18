// Write a C program to count number of digits in a number.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int digits = 0;
    do{
        digits++;
    }while(num /= 10);
    cout<<"No. of digits will be : "<<digits;
}