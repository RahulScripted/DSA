// Question: Write a Program to check whether a triangle can be formed or not Switch Statement.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int angle1,angle2,angle3;
    cout<<"Enter first angle : ";
    cin>>angle1;
    cout<<"Enter second angle : ";
    cin>>angle2;
    cout<<"Enter third angle : ";
    cin>>angle3;
    switch ((angle1 + angle2 + angle3) == 180){
        case 0:
            cout<<"Triangle can't be formed";
            break;
        case 1:
            cout<<"Triangle can formed";
            break;
    }
}