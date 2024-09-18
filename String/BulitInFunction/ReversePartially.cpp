// Built-in Function to reverse the string

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a String : ";
    getline(cin,str);
    cout<<"Before updating String : "<<str<<endl;
    int idx;
    cout<<"At which index you want to change : ";
    cin>>idx;
    reverse(str.begin() + idx,str.end());
    cout<<"After updating String : "<<str;
}