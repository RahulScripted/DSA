// How to print a sentence

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    cout<<"Entered string : "<<str;
}