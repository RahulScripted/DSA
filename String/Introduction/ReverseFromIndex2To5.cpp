// Write a C++ program where input a string which have length greater than 5 and reverse the string from index 2 to 5

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter a even length of string : ";
    cin>>str;
    int n = str.length();
    if(n > 5){
        reverse(str.begin() + 2 , str.begin() + 6);
        cout<<"Updated String : "<<str;
    }
    else{
        cout<<str<<" has not length greater than 5";
    }
}