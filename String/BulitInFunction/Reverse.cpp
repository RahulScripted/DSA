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
    reverse(str.begin(),str.end());
    cout<<"After updating String : "<<str;
}