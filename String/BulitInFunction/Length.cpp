// Built-in Function to measure the length of the string

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a String : ";
    getline(cin,str);
    cout<<"The Length of the string : "<<str.length();
}