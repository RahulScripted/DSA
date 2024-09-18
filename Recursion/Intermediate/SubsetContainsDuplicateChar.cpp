// Print all the subset of the string

#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storeSubset(string ans,string str,vector<string>&v,bool flag){
    // Base Case
    if(str.length() == 0){
        v.push_back(ans);
        return;
    }
    char ch = str[0];
    if(str.length() == 1){
        if(flag == true)storeSubset(ans + ch,str.substr(1),v,true);
        storeSubset(ans,str.substr(1),v,true);
        return;
    }
    char dh = str[1];
    if(ch == dh){
        if(flag == true)storeSubset(ans + ch,str.substr(1),v,true);
        storeSubset(ans,str.substr(1),v,false);
    }
    else{
        if(flag == true)storeSubset(ans + ch,str.substr(1),v,true);
        storeSubset(ans,str.substr(1),v,true);
    }
}
int main(){
    string str = "aac";
    vector<string>v;
    storeSubset("",str,v,true);
    // Print Vector
    cout<<"Subsets are : "<<endl;
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<endl;
    }
}