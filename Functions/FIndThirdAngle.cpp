// Write a C program to find the third angle of a triangle.

#include<iostream>
using namespace std;
float ThirdAngle(float angle1,float angle2){
    return (180 - (angle1 + angle2));
}
int main(){
    float angle1,angle2;
    cout<<"Enter first angle : ";
    cin>>angle1;
    cout<<"Enter second angle : ";
    cin>>angle2;
    cout<<"Third angle will be : "<<ThirdAngle(angle1,angle2);
}