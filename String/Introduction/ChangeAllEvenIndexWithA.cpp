// Write a program to change all even index with 'a'

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    int ans = 0;
    for(int i = 0;i < str.length();i++){
        if(i % 2 == 0) str[i] = 'a';
    }
    cout<<"Updated String : "<<str;
}