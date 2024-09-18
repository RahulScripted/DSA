// Generate all binary string without consecutive 1 for given length n

#include<iostream>
#include<string>
using namespace std;
void generateBinary(string s,int n){
    // Base Case
    if(s.length() == n){
        cout<<s<<endl;
        return;
    }
    generateBinary(s + '0',n);
    if(s == "" || s[s.length() - 1] == '0') generateBinary(s + '1',n);
}
int main(){
    int n = 4;
    generateBinary("",n);
}