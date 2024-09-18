// Create a function to display sum of three integers without any return data to main() function

#include<iostream>
using namespace std;

void sum(int num1,int num2,int num3){
    cout<<"Sum Will be : "<<(num1 + num2 + num3);
}
int main(){
    int num1,num2,num3;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Enter third number : ";
    cin>>num3;
    sum(num1,num2,num3);
}