// Write a program to calculate the perimeter of the rectangle.

#include<iostream>
using namespace std;
int RectangleParameter(int length,int breadth){
    return (2 * (length + breadth));
}
int main(){
    int length,breadth;
    cout<<"Enter the length : ";
    cin>>length;
    cout<<"Enter the breadth : ";
    cin>>breadth;
    cout<<"Perimeter will be : "<<RectangleParameter(length,breadth);
}