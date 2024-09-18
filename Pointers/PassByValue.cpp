// Swap Function 

#include<iostream>
using namespace std;
void swap(int num1,int num2){ // Pass By Value
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Before swap : "<<num1<<" "<<num2<<endl;
    swap(num1,num2);
    // Didn't Change as these num1 & num2 are different than num1 & num2 that are inside swap function
    cout<<"After swap : "<<num1<<" "<<num2<<endl; 
}