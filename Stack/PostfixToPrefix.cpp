// Postfix expression to prefix expression




#include<bits/stdc++.h>
using namespace std;

string solve(string num1,string num2,char ch){
    return ch + num1 + num2;
}

string postfixToPrefix(string s){
    stack<string>postToPre;
    int n = s.length();

    for(int i = 0;i < n;i++){
        if(s[i] >= '0' && s[i] <= '9') postToPre.push(to_string(s[i] - '0'));
        else{
            string val2 = postToPre.top();
            postToPre.pop();
            string val1 = postToPre.top();
            postToPre.pop();
            string ans = solve(val1,val2,s[i]);
            postToPre.push(ans);
        }
    }
    return postToPre.top();
}

int main(){
    string s;
    cout<<"Enter a mathematical expression : ";
    getline(cin,s);
    cout<<"Result : "<<postfixToPrefix(s)<<endl;
}