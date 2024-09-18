// Evaluate postfix expression




#include<bits/stdc++.h>
using namespace std;

int solve(int num1,int num2,char ch){
    if(ch == '+') return num1 + num2;
    else if(ch == '-') return num1 - num2;
    else if(ch == '*') return num1 * num2;
    else return num1 / num2;
}

int evaluation(string s){
    stack<int>post;
    int n = s.length();

    for(int i = 0;i < n;i++){
        if(s[i] >= '0' && s[i] <= '9') post.push(s[i] - '0');
        else{
            int num2 = post.top();
            post.pop();
            int num1 = post.top();
            post.pop();
            int ans = solve(num1,num2,s[i]);
            post.push(ans);
        }
    }
    return post.top();
}

int main(){
    string s;
    cout<<"Enter a mathematical expression : ";
    getline(cin,s);
    cout<<"Result : "<<evaluation(s)<<endl;
}