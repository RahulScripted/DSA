// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s,t;
    cout<<"Enter s : ";
    cin>>s;
    cout<<"Enter t : ";
    cin>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s == t) cout<<"True";
    else cout<<"False";
}