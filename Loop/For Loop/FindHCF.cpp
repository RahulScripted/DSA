// Question: Write a program to find the HCF (Highest Common Factor) of two numbers.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,HCF = 1;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    int j = (num1 < num2) ? num1 : num2;
    for(int i = 1;i <= j;i++){
        if(num1 % i == 0 && num2 % i == 0){
            HCF = i;
        }
    }
    cout<<"HCF (Highest Common Factor) of "<<num1<<" and "<<num2<<" will be : "<<HCF;
}