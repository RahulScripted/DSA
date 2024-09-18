// Write a function to calculate circle perimeter

#include<iostream>
using namespace std;
float circleArea(int radius){
    return (2 * 3.14 * radius);
}
int main(){
    int radius;
    cout<<"Enter radius : ";
    cin>>radius;
    cout<<"Circle perimeter will be : "<<circleArea(radius);
}