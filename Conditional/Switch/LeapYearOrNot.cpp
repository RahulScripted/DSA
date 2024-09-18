// Question: Write a Program to check whether a year is a Leap-year is not Using the switch statement.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cout<<"Enter a year : ";
    cin>>year;
    switch (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0)){
        case 0:
            cout<<year<<" is not a Leap-year";
            break;
        case 1:
            cout<<year<<" is a Leap-year";
            break;
    }
}