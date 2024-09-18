// Input a string of length less than 10 and convert it into integer without using builtin function.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    int n = str.length();
    int ans = 0;
    for(int i = 0;i < n;i++){
        if (str[i] >= '0' && str[i] <= '9') {
            ans = ans * 10 + (str[i] - '0');
        } 
    }
    cout<<"Answer is : "<<ans;
}