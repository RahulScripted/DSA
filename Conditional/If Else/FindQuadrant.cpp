// Question: Write a program to find the quadrant.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter X co-ordinate point : ";
    cin>>x;
    cout<<"Enter Y co-ordinate point : ";
    cin>>y;
    if(x > 0 && y > 0){
        cout<<"The coordinate point "<<"("<<x<<","<<y<<")"<<" lies in the First quadrant.";
    }
    else if(x < 0 && y > 0){
        cout<<"The coordinate point "<<"("<<x<<","<<y<<")"<<" lies in the second quadrant.";
    }
    else if(x < 0 && y < 0){
        cout<<"The coordinate point "<<"("<<x<<","<<y<<")"<<" lies in the third quadrant.";
    }
    else if(x > 0 && y < 0){
        cout<<"The coordinate point "<<"("<<x<<","<<y<<")"<<" lies in the fourth quadrant.";
    }
}