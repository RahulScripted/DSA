// Create a function to get odd number or even number

#include<iostream>
using namespace std;

void odd_even(int num){
    if(num % 2 == 0){
        cout<<"Even Number";
    }
    else{
        cout<<"Odd number";
    }
}
int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    odd_even(num);
}