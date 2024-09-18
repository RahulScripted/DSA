// Sort string in increased order greater than X

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    string str;
    for(int i = 0;i < s.length();i++){
        if(s[i] >= ch){
            str += s[i];
        }
    }
    cout<<"Characters that are greater than "<<ch<<" will be : "<<str<<endl;
    for(int i = 0;i < str.length();i++){
        for(int j = 0;j < str.length() - i - 1;j++){
            if(str[j] > str[j + 1]){
                int temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = str[j];
            }
        }
    }
    cout<<"After sorting : "<<str;
}