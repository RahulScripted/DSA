// Write a program to input the value of the radius of a circle from keyboard and then calculate area & perimeter.

#include<iostream>
using namespace std;
int main(){
    int radius;
    cout<<"Enter the length : ";
    cin>>radius;
    cout<<"Area will be : "<<(3.14 * radius * radius)<<endl;
    cout<<"Perimeter will be : "<<(2 * 3.14 * radius);
}