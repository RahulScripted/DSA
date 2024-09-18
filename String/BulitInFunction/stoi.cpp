// Convert string to integer

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    int x = stoi(str); // stoll -> string to integer
    cout<<"In Integer : "<<x;
}