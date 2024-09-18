// Write a C program that takes hours and minutes as input, and calculates the total number of minutes.

#include<iostream>
using namespace std;
int main(){
    int hour,minutes;
    cout<<"Enter number of hours : ";
    cin>>hour;
    cout<<"Enter number of minutes : ";
    cin>>minutes;
    cout<<"Total number of minutes : "<<((hour * 60) + minutes);
}