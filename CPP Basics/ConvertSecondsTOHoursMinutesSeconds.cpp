// Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

#include<iostream>
using namespace std;
int main(){
    int seconds,mins,hr,sec;
    cout<<"Enter total no. of seconds : ";
    cin>>seconds;
    hr = (seconds / 3600);
    mins = (seconds - (3600 * hr)) / 60;
    sec = (seconds -(3600 * hr) - (mins * 60));
    cout<<"Hour : Minute : Second = "<<hr<<" : "<<mins<<" : "<<sec;
}