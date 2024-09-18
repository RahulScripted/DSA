// Convert Infix expression to post expression



#include<bits/stdc++.h>
using namespace std;

int prio(char ch){
    if(ch == '+' || ch == '-') return 1;
    else return 2;
}

string solve(string s1,string s2,char ch){
    return s1 + s2 + ch;
}

string infixToPostfix(string s){
    stack<string>post;
    stack<char>op;
    int n = s.length();

    for(int i = 0;i < n;i++){
        if(s[i] == ' ') continue;
        else if(s[i] >= '0' && s[i] <= '9') post.push(to_string(s[i] - '0'));

        else if(op.empty()) op.push(s[i]);
        else if(!op.empty() && prio(s[i]) > prio(op.top())) op.push(s[i]);
        else{
            while(!op.empty() && prio(s[i]) <= prio(op.top())){
                char ch = op.top();
                op.pop();
                string val2 = post.top();
                post.pop();
                string val1 = post.top();
                post.pop();
                string ans = solve(val1,val2,ch);
                post.push(ans);
            }
            op.push(s[i]);
        }
    }
    
    // Let's empty our op stack
    while(!op.empty()){
        char ch = op.top();
        op.pop();
        string val2 = post.top();
        post.pop();
        string val1 = post.top();
        post.pop();
        string ans = solve(val1,val2,ch);
        post.push(ans);
    }

    return post.top();
}

int main(){
    string s;
    cout<<"Enter a mathematical infix expression : ";
    getline(cin,s);
    cout<<"Result : "<<infixToPostfix(s)<<endl;
}