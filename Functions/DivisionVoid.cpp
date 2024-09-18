// Create a function to display division of two integers without any return data to main() function

#include<iostream>
using namespace std;

void division(float num1,float num2){
    cout<<"Division Will be : "<<(num1 / num2);
}
int main(){
    float num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    division(num1,num2);
}