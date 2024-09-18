// Balanced Brackets



#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string s){
    int n = s.length();
    // Base Case
    if(n % 2 != 0) return false;
    stack<char>st;

    for(int i = 0;i < n;i++){
        if(s[i] == '(') st.push(s[i]);
        else{
            if(st.empty()) return false;
            else st.pop();
        }
    }
    return st.empty() ?  true : false;
}

int main(){
    string s;
    cout<<"Enter the string of brackets : ";
    cin>>s;

    if(isBalanced(s)) cout<<"True"<<endl;
    else cout<<"False"<<endl;
}