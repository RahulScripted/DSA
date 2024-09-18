// Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "".


#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    int n = strs.size();
    sort(strs.begin(),strs.end());
    string s = "";
    string first = strs[0];
    string last = strs[n - 1];
    for(int i = 0;i < min(first.size(),last.size());i++){
        if(first[i] == last[i]) s += first[i];
        else return s;
    }
    return s;
}
int main(){
    int size;
    cout<<"Enter the size of the vector : ";
    cin>>size;
    vector<string> v;
    for(int i = 0;i < size;i++){
        string temp;
        cin>>temp;
        v.push_back(temp);
    }
    string s = longestCommonPrefix(v);
    cout<<"The longest common prefix string is : "<<s;
}