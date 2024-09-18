// Given 2 string s and t. Return if they are isomorphic


#include<iostream>
#include<string>
using namespace std;
bool isIsomorphic(string s, string t) {
    vector<int> charToIndex_s(128);
    vector<int> charToIndex_t(128);
    for (int i = 0; i < s.length(); ++i) {
      if (charToIndex_s[s[i]] != charToIndex_t[t[i]]) return false;
        charToIndex_s[s[i]] = i + 1;
      charToIndex_t[t[i]] = i + 1;
    }
    return true;
}
int main(){
    string s,t;
    cout<<"Enter s string : ";
    cin>>s;
    cout<<"Enter t string : ";
    cin>>t;
    if(isIsomorphic(s,t)) cout<<"They are isomorphic";
    else cout<<"They are not isomorphic";
}