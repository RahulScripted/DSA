//  Write a program in C that takes minutes as input, and display the total number of hours and minutes.

#include<iostream>
using namespace std;
int main(){
    int minutes,hour = 0;
    cout<<"Enter number of minutes : ";
    cin>>minutes;
    hour = (minutes / 60);
    minutes = (minutes % 60);
    cout<<"In hours it'll be : "<<hour<<" and minutes it'll be : "<<minutes;
}