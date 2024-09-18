// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s,string t){
    if(s.length() != t.length()){
        return false;
    }
    vector<int>count(26);
    for(const char c : s){
        ++count[c - 'a'];
    }
    for(const char c : t){
        if(count[c - 'a']  == 0){
            return false;
        }
        --count[c - 'a'];
    }
    return true;
}
using namespace std;
int main(){
    string s,t;
    cout<<"Enter s : ";
    cin>>s;
    cout<<"Enter t : ";
    cin>>t;
    if(isAnagram(s,t)) cout<<s<<" & "<<t<<" are anagram";
    else cout<<s<<" & "<<t<<" are not anagram";
}