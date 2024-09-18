// Print all the subset of the string

#include<iostream>
#include<string>
using namespace std;
void printSubset(string ans,string str){
    // Base Case
    if(str.length() == 0){
        cout<<ans<<endl;
        return;
    }
    char ch = str[0];
    printSubset(ans + ch,str.substr(1));
    printSubset(ans,str.substr(1));
}
int main(){
    string str = "abc";
    cout<<"Subsets are : "<<endl;
    printSubset("",str);
}