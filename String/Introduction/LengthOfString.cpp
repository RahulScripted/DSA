// Length of String

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    cout<<"Length of the string : "<<str.length();
}