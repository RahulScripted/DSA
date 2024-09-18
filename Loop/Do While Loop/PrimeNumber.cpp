// Write a C program to check whether a number is Prime number or not.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int number = 2;
    bool flag = true;
    do{
        if(num % number == 0){
            flag = false;
            break;
        }
        number++;
    }while(number <= (num / 2));
    if(flag == true){
        cout<<num<<" is a prime number";
    }
    else{
        cout<<num<<" is not a prime number";
    }
}