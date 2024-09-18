// Write a program to check whether a number is palindrome or not.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int result = 0,n = num;
    do{
        int rem = (n % 10);
        result = (result * 10) + rem;
    }while(n /= 10);
    if(num == result){
        cout<<"It's a palindrome number";
    }
    else{
        cout<<"It's not a palindrome number";
    }
}