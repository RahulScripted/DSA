// Write a program that calculates the volume of a sphere.

#include<iostream>
using namespace std;
int main(){
    float radius;
    cout<<"Enter the length : ";
    cin>>radius;
    cout<<"Area will be : "<<(4 * 3.14 * radius * radius * radius) / 3;
}