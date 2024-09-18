// Question: Write a program to accept the height of a person in centimeters and categorize the person according to their height.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int height;
    cout<<"Enter your height : ";
    cin>>height;
    if(height >= 175){
        cout<<"The person is very tall";
    }
    else if(height >= 160){
        cout<<"The person is tall";
    }
    else if(height >= 145){
        cout<<"The person is normal";
    }
    else if(height >= 130){
        cout<<"The person is dwarf";
    }
    else{
        cout<<"The person is very dwarf";
    }
}