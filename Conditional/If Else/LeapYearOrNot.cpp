// Question: Write a program to find whether a given year is a leap year or not.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cout<<"Enter year : ";
    cin>>year;
    if(year % 4 == 0 && (year % 400 == 0 || year % 100 != 0)){
        cout<<year<<" is a Leap-Year";
    }
    else{
        cout<<year<<" is not a Leap-Year";
    }
}