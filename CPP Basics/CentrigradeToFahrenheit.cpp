// Write a program that converts Centigrade to Fahrenheit.

#include<iostream>
using namespace std;
int main(){
    float Centigrade;
    cout<<"Enter the temperature in centigrade : ";
    cin>>Centigrade;
    cout<<"Temperature in fahrenheit will be : "<<((Centigrade * 9) / 5) + 32;
}