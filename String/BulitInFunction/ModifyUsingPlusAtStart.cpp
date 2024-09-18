// Built-in Function to modify a string

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a String : ";
    getline(cin,str);
    str = 'a' + str;
    cout<<"After Updating : "<<str;
}