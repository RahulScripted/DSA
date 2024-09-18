// Built-in Function to push a character at the end of the string

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a String : ";
    getline(cin,str);
    cout<<"Before updating String : "<<str<<endl;
    char ch;
    cout<<"Enter a Character : ";
    cin>>ch;
    str.push_back(ch);
    cout<<"After updating String : "<<str;
}