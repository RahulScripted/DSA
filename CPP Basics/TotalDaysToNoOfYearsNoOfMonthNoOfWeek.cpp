// Write a program to convert specified days into years, months and Weeks

#include<iostream>
using namespace std;
int main(){
    int days;
    cout<<"Enter total no. of days : ";
    cin>>days;
    cout<<"years : "<<(days / 365)<<endl;
    cout<<"Months : "<<(days / 30)<<endl;
    cout<<"Weeks : "<<(days / 7)<<endl;
}