// Write a function to calculate circle area

#include<iostream>
using namespace std;
float circleArea(int radius){
    return (3.14 * radius * radius);
}
int main(){
    int radius;
    cout<<"Enter radius : ";
    cin>>radius;
    cout<<"Circle area will be : "<<circleArea(radius);
}