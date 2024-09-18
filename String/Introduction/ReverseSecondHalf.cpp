// Write a C++ program to reverse first half of the even length of the string

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter a even length of string : ";
    cin>>str;
    int n = str.length();
    if(n % 2 == 0){
        reverse(str.begin()  + n / 2, str.end());
        cout<<"Updated String : "<<str;
    }
    else{
        cout<<str<<" has not even length";
    }
}