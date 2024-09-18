// Print all the subset of the string

#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storeSubset(string ans,string str,vector<string>&v){
    // Base Case
    if(str.length() == 0){
        v.push_back(ans);
        return;
    }
    char ch = str[0];
    storeSubset(ans + ch,str.substr(1),v);
    storeSubset(ans,str.substr(1),v);
}
int main(){
    string str = "abc";
    vector<string>v;
    storeSubset("",str,v);
    // Print Vector
    cout<<"Subsets are : ";
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
}