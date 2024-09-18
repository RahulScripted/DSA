// Create a function to display greatest among 2 numbers

#include<iostream>
using namespace std;

int greatestAmong2(int num1,int num2){
    if(num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}
int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Greatest number is : "<<greatestAmong2(num1,num2);
}