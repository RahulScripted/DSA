// Input a string of even length and return the second half of the string using inbuilt substr function.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter a even length of string : ";
    cin>>str;
    int n = str.length();
    if(n % 2 == 0){
        cout<<"String : "<<str.substr(n/2);;
    }
    else{
        cout<<str<<" has not even length";
    }
}