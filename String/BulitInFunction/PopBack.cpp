// Built-in Function to pop a character at the end of the string

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a String : ";
    getline(cin,str);
    cout<<"Before updating String : "<<str<<endl;
    str.pop_back();
    cout<<"After updating 1st time String : "<<str<<endl;
    str.pop_back();
    cout<<"After updating 2nd time String : "<<str<<endl;
}