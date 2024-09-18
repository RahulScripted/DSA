// Write a program to modify a particular index

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    int idx;
    cout<<"Enter the index : ";
    cin>>idx;
    char ch;
    cout<<"Enter which character you want to see : ";
    cin>>ch;
    str[idx] = ch;
    cout<<"Updated String : "<<str;
}