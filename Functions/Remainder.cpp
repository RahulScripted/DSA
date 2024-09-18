// Create a function to display remainder of two integers without any return data to main() function

#include<iostream>
using namespace std;

int remainder(int num1,int num2){
    return (num1 % num2);
}
int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Remainder Will be : "<<remainder(num1,num2);
}