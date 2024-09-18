// Write a program to calculate the sum of even numbers between a and b (both inclusive) using recursion.

#include<iostream>
using namespace std;
int sumEven(int a,int b){
    if(a > b) return 0;
    if(a % 2 != 0) return sumEven(a + 1,b);
    return a + sumEven(a + 2,b);
}
int main(){
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"The sum of even numbers between "<<a<<" and "<<b<<" is : "<<sumEven(a,b);
}