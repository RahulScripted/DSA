// Prefix expression to infix expression




#include<bits/stdc++.h>
using namespace std;

string solve(string num1,string num2,char ch){
    return num1 + ch + num2;
}

string prefixToInfix(string s){
    stack<string>preToIn;
    int n = s.length();

    for(int i = (n - 1);i >= 0;i--){
        if(s[i] >= '0' && s[i] <= '9') preToIn.push(to_string(s[i] - '0'));
        else{
            string val1 = preToIn.top();
            preToIn.pop();
            string val2 = preToIn.top();
            preToIn.pop();
            string ans = solve(val1,val2,s[i]);
            preToIn.push(ans);
        }
    }
    return preToIn.top();
}

int main(){
    string s;
    cout<<"Enter a mathematical expression : ";
    getline(cin,s);
    cout<<"Result : "<<prefixToInfix(s)<<endl;
}