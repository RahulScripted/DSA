// Write a function to calculate circle volume

#include<iostream>
using namespace std;
float circleArea(int radius){
    return (4 * 3.14 * radius * radius * radius) / 3;
}
int main(){
    int radius;
    cout<<"Enter radius : ";
    cin>>radius;
    cout<<"Circle volume will be : "<<circleArea(radius);
}