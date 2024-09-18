// Write a C++ program to print all the words in next line by avoiding spaces.

#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    stringstream ss(str);
    string temp;
    while(ss >> temp){
        cout<<temp<<endl;
    }
}