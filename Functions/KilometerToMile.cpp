// Write a program that converts kilometers per hour to miles per hour.

#include<iostream>
using namespace std;
float KilometerToMeter(float kilometers){
    return (kilometers * 0.621);
}
int main(){
    float kilometers;
    cout<<"Enter the distance in kilometers : ";
    cin>>kilometers;
    cout<<"In mile it will be : "<<KilometerToMeter(kilometers)<<" mile";
}