// Check whether a string is palindrome or not

#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string str,int i,int j){
    // Base Case
    if(i > j) return true;
    if(str[i] != str[j]) return false;
    else return isPalindrome(str,i+1,j-1);
}
int main(){
    string str = "racecar";
    if(isPalindrome(str,0,str.length() - 1)) cout<<"True"<<endl;
    else cout<<"False"<<endl;

    str = "rahul";
    if(isPalindrome(str,0,str.length() - 1)) cout<<"True"<<endl;
    else cout<<"False"<<endl;
}