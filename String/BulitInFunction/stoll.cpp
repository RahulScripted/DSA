// Convert string to long long

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    long long x = stoll(str); // stoll -> string to long long
    cout<<"In Integer : "<<x;
}