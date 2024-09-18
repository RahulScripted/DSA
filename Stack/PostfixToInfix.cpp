// Postfix expression to infix expression




#include<bits/stdc++.h>
using namespace std;

string solve(string num1,string num2,char ch){
    return num1 + ch + num2;
}

string postfixToInfix(string s){
    stack<string>postToIn;
    int n = s.length();

    for(int i = 0;i < n;i++){
        if(s[i] >= '0' && s[i] <= '9') postToIn.push(to_string(s[i] - '0'));
        else{
            string val2 = postToIn.top();
            postToIn.pop();
            string val1 = postToIn.top();
            postToIn.pop();
            string ans = solve(val1,val2,s[i]);
            postToIn.push(ans);
        }
    }
    return postToIn.top();
}

int main(){
    string s;
    cout<<"Enter a mathematical expression : ";
    getline(cin,s);
    cout<<"Result : "<<postfixToInfix(s)<<endl;
}