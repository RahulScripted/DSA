// The set [1, 2, 3, ..., n] contains a total of n! unique permutations. Given n and k, return the kth permutation sequence.

#include<iostream>
#include<string>
using namespace std;
string helper(string str,int k,string ans){
    int n = str.length();
    // Base Case
    if(n == 0) return ans;
    int fact = 1; // Calculating factorial
    for(int i = 2;i < n;i++){
        fact *= i;
    }
    int idx = k / fact; // 0th element of the string
    if(k % fact == 0) idx--;
    char ch = str[idx]; // Storing 0th element
    string leftSide = str.substr(0,idx);
    string rightSide = str.substr(idx + 1);
    int q = 1;
    if(k % fact == 0) q = fact; 
    else q = k % fact;
    return helper(leftSide + rightSide,q,ans + ch);
}
string getPermutation(int n, int k){
    string str = "";
    for(int i = 1;i <= n;i++){
        str += to_string(i);
    }
    return helper(str,k,"");
}
int main(){
    int n = 4,k = 17;
    cout<<k<<"th sequence : "<<getPermutation(n,k);
}