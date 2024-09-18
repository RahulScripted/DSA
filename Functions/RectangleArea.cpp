// Write a program to calculate the area of the rectangle.

#include<iostream>
using namespace std;
int RectangleArea(int length,int breadth){
    return (length * breadth);
}
int main(){
    int length,breadth;
    cout<<"Enter the length : ";
    cin>>length;
    cout<<"Enter the breadth : ";
    cin>>breadth;
    cout<<"Area will be : "<<RectangleArea(length,breadth);
}