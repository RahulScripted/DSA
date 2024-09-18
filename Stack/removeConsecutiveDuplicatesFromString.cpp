// Remove Consecutive Duplicates in a string



#include<iostream>
#include<string>
#include<stack>
using namespace std;

string compressedString(string s){
    stack<char>st;
    int n = s.length();

    string result = "";
    st.push(s[0]);
    result += st.top();
    for(int i = 1;i < n;i++){
        if(s[i] != st.top()){
            st.push(s[i]);
            result += st.top();
        }
    }
    return result;
}

int main(){
    string s;
    cout<<"Enter the string of brackets : ";
    cin>>s;

    string result = compressedString(s);
    cout<<result<<endl;
}