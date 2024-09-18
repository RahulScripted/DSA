// Question: Take values of length and breadth of a rectangle from user and check if it is square or not.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int length,breadth;
    cout<<"Enter the length : ";
    cin>>length;
    cout<<"Enter the breadth : ";
    cin>>breadth;
    if(length == breadth){
        cout<<"It's a square";
    }
    else{
        cout<<"It's not a square";
    }
}