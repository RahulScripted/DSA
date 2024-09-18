// Convert Infix expression to prefix expression handling brackets



#include<bits/stdc++.h>
using namespace std;

int prio(char ch){
    if(ch == '+' || ch == '-') return 1;
    else return 2;
}

string solve(char ch,string s1,string s2){
    return ch + s1 + s2;
}

string infixToPrefixWithBrackets(string s){
    stack<string>pre;
    stack<char>op;
    int n = s.length();

    for(int i = 0;i < n;i++){
        // Handling space
        if(s[i] == ' ') continue;
        // Handling digit
        else if(s[i] >= '0' && s[i] <= '9'){
            pre.push(to_string(s[i] - '0'));
        }
        else if(op.empty()) op.push(s[i]);
        else if(s[i] == '(' || op.top() == '(') op.push(s[i]);
        else if(s[i] == ')'){
            while(op.top() != '('){
                char ch = op.top();
                op.pop();
                string val2 = pre.top();
                pre.pop();
                string val1 = pre.top();
                pre.pop();
                string ans = solve(ch,val1,val2);
                pre.push(ans);
            }
            op.pop();
        }
        else if(!op.empty() && prio(s[i]) > prio(op.top())) op.push(s[i]);
        else{
            while(!op.empty() && prio(s[i]) <= prio(op.top())){
                char ch = op.top();
                op.pop();
                string val2 = pre.top();
                pre.pop();
                string val1 = pre.top();
                pre.pop();
                string ans = solve(ch,val1,val2);
                pre.push(ans);
            }
            op.push(s[i]);
        }
    }

    // Empty op stack
    while(!op.empty()){
        char ch = op.top();
        op.pop();
        string val2 = pre.top();
        pre.pop();
        string val1 = pre.top();
        pre.pop();
        string ans = solve(ch,val1,val2);
        pre.push(ans);
    }

    return pre.top();
}

int main(){
    string s;
    cout<<"Enter a mathematical infix expression : ";
    getline(cin,s);
    cout<<"Result : "<<infixToPrefixWithBrackets(s)<<endl;
}