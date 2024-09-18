// Built-in Function to add 2 string

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1,str2;
    cout<<"Enter a String : ";
    getline(cin,str1);
    cout<<"Enter a String : ";
    getline(cin,str2);
    str1 = str1 + str2;
    cout<<"After adding : "<<str1;
}