// Evaluate infix expression



#include<bits/stdc++.h>
using namespace std;

int prio(char ch){
    if(ch == '+' || ch == '-') return 1;
    else return 2;
}

int solve(int val1,int val2,char ch){
    if(ch == '+') return val1 + val2;
    else if(ch == '-') return val1 - val2;
    else if(ch == '*') return val1 * val2;
    else return val1 / val2;
}

int evaluation(string s){
    int n = s.length();
    stack<int>num;
    stack<char>op;

    for(int i = 0;i < n;i++){
        if(s[i] == ' ') continue;
        else if(s[i] >= '0' && s[i] <= '9'){
            num.push(s[i] - '0');
        }

        else{
            if(op.empty() || prio(s[i]) > prio(op.top())) op.push(s[i]);

            else{
                while(!op.empty() && prio(s[i]) <= prio(op.top())){
                    char ch = op.top();
                    op.pop();
                    int val2 = num.top();
                    num.pop();
                    int val1 = num.top();
                    num.pop();
                    int ans = solve(val1,val2,ch);
                    num.push(ans); 
                }
                op.push(s[i]);
            }
        }
    }

    // empty operator stack
    while(!op.empty()){
        char ch = op.top();
        op.pop();
        int val2 = num.top();
        num.pop();
        int val1 = num.top();
        num.pop();
        int ans = solve(val1,val2,ch);
        num.push(ans);
    }

    return num.top(); // Return the final answer
}

int main(){
    string s;
    cout<<"Enter a mathematical expression : ";
    getline(cin,s);
    cout<<"Result : "<<evaluation(s)<<endl;
}