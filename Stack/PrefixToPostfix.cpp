// Prefix expression to postfix expression




#include<bits/stdc++.h>
using namespace std;

string solve(string num1,string num2,char ch){
    return num1 + num2 + ch;
}

string prefixToPostfix(string s){
    stack<string>preToPost;
    int n = s.length();

    for(int i = (n - 1);i >= 0;i--){
        if(s[i] >= '0' && s[i] <= '9') preToPost.push(to_string(s[i] - '0'));
        else{
            string val1 = preToPost.top();
            preToPost.pop();
            string val2 = preToPost.top();
            preToPost.pop();
            string ans = solve(val1,val2,s[i]);
            preToPost.push(ans);
        }
    }
    return preToPost.top();
}

int main(){
    string s;
    cout<<"Enter a mathematical expression : ";
    getline(cin,s);
    cout<<"Result : "<<prefixToPostfix(s)<<endl;
}