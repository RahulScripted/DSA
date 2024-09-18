// Input a string and concatenate with its reverse string and print it.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    for(int i = str.size() - 1;i >= 0;i--){
        str += str[i];
    }
    cout<<"The String become : "<<str;
}