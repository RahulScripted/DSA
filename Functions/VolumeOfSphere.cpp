// Write a program that calculates the volume of a sphere.

#include<iostream>
using namespace std;
int volumeSphere(int radius){
    return (4 * 3.14 * radius * radius * radius) / 3;
}
int main(){
    float radius;
    cout<<"Enter the length : ";
    cin>>radius;
    cout<<"Area will be : "<<volumeSphere(radius);
}