// Calculate the minimum number of bit flips to convert from one number to another.



#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    
    cout<<"Enter second number : ";
    cin>>num2;

    int temp = (num1 ^ num2);
    cout<<"Minimum flip required : "<<__builtin_popcount(temp)<<endl;
}