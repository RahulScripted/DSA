// Print all the subset of the string

#include<iostream>
#include<string>
using namespace std;
void printSubset(string ans,string str,int idx){
    // Base Case
    if(idx == str.length()){
        cout<<ans<<endl;
        return;
    }
    char ch = str[idx];
    printSubset(ans + ch,str,idx + 1);
    printSubset(ans,str,idx + 1);
}
int main(){
    string str = "abc";
    cout<<"Subsets are : "<<endl;
    printSubset("",str,0);
}