// Question: Write a program to check whether a triangle can be formed with the given values for the angles.

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
    if((angle1 + angle2 + angle3)== 180){
        cout<<"A triangle can be formed";
    }
    else{
        cout<<"A triangle can't be formed";
    }
}