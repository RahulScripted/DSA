// Convert Infix expression to prefix expression



#include<bits/stdc++.h>
using namespace std;

int prio(char ch){
    if(ch == '+' || ch == '-') return 1;
    else return 2;
}

string solve(char ch,string s1,string s2){
    return ch + s1 + s2;
}

string infixToPrefix(string s){
    stack<string>pre;
    stack<char>op;
    int n = s.length();

    for(int i = 0;i < n;i++){
        if(s[i] >= 48 && s[i] <= 57){ // Digit
            pre.push(to_string(s[i] - 48));
        }
        else{
            if(s[i] == ' ') continue;
            else if(op.empty()) op.push(s[i]);
            else if(!op.empty() && prio(s[i]) > prio(op.top())) op.push(s[i]);
            else{
                while(!op.empty() && prio(s[i]) <= prio(op.top())){
                    char ch = op.top();
                    op.pop();
                    string val2 = pre.top();
                    pre.pop();
                    string val1 = pre.top();
                    pre.pop();
                    string answer = solve(ch,val1,val2);
                    pre.push(answer);
                }
                op.push(s[i]);
            }
        }
    }
    while(!op.empty()){
        char ch = op.top();
        op.pop();
        string val2 = pre.top();
        pre.pop();
        string val1 = pre.top();
        pre.pop();
        string answer = solve(ch,val1,val2);
        pre.push(answer);
    }
    return pre.top();
}

int main(){
    string s;
    cout<<"Enter a mathematical infix expression : ";
    getline(cin,s);
    cout<<"Result : "<<infixToPrefix(s)<<endl;
}