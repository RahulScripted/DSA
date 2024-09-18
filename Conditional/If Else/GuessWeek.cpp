// Question: Write a program to read any day number in integer and display the day name in word format.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int week;
    cout<<"Enter the number of day : ";
    cin>>week;
    week %= 7;
    if(week == 0){
        cout<<"Sunday";
    }
    else if(week == 1){
        cout<<"Monday";
    }
    else if(week == 2){
        cout<<"Tuesday";
    }
    else if(week == 3){
        cout<<"Wednesday";
    }
    else if(week == 4){
        cout<<"Thursday";
    }
    else if(week == 5){
        cout<<"Friday";
    }
    else if(week == 6){
        cout<<"Saturday";
    }
}