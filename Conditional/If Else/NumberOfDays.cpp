// Question: Write a program to read any Month Number in integer and display the number of days for this month.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int month;
    cout<<"Enter month : ";
    cin>>month;
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        cout<<"Month has 31 days";
    }
    else if(month == 2){
        cout<<"Month has 28 days";
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11){
        cout<<"Month has 30 days";
    }
}