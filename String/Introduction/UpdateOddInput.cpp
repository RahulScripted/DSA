// Input a string of size n and update all the odd positions in the string to character '#'. Consider 0-based indexing.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    for(int i = 0;i < str.length();i++){
        if(i % 2 == 0){
            str[i] = '#';
        }
    }
    cout<<"String : "<<str;
}