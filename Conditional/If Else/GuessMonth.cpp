// Question: Write a program for reading any Month Number and displaying the Month name as a word.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int month;
    cout<<"Enter month : ";
    cin>>month;
    if(month == 1){
        cout<<"Month is January";
    }
    else if(month == 2){
        cout<<"Month is February";
    }
    else if(month == 3){
        cout<<"Month is March";
    }
    else if(month == 4){
        cout<<"Month is April";
    }
    else if(month == 5){
        cout<<"Month is May";
    }
    else if(month == 6){
        cout<<"Month is June";
    }
    else if(month == 7){
        cout<<"Month is July";
    }
    else if(month == 8){
        cout<<"Month is August";
    }
    else if(month == 9){
        cout<<"Month is September";
    }
    else if(month == 10){
        cout<<"Month is October";
    }
    else if(month == 11){
        cout<<"Month is November";
    }
    else if(month == 12){
        cout<<"Month is December";
    }
    else{
        cout<<"Wrong input";
    }
}