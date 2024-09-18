// Question: Write a program for reading any week Number and displaying the week name as a word.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int week;
    cout<<"Enter week number : ";
    cin>>week;
    week %= 7;
    switch(week){
    case 0:
        cout<<"Sunday";
        break;
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    }
}