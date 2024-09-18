// Given a string consisting of lowercase alphabets. Print the character that is occurring most of the times.

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    vector<int>count(26,0);
    for(int i = 0;i < str.length();i++){
        char ch = str[i];
        int ascii = (int)(ch) - 97;
        ++count[ascii];
    }
    int max = 0;
    for(int i = 0;i < 26;i++){
        if(count[i] > max) max = count[i];
    }
    for(int i = 0;i < 26;i++){
        if(count[i] == max){
            int ascii = i + 97;
            char ch = char(ascii);
            cout<<ch<<" -> "<<max;
        }
    }
}