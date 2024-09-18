// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

#include<iostream>
#include<string>
using namespace std;
void generate(string s,int open,int close,int n){
    // Base Case
    if(close == n){
        cout<<s<<endl;
        return;
    }
    if(open < n) generate(s + '(',open + 1,close,n);
    if(close < open) generate(s + ')',open,close + 1,n);
}
int main(){
    int n = 3;
    generate("",0,0,n);
}