// Return the total number of digits in a number without using loop.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    string s = to_string(num);
    cout<<"Total number of digits : "<<s.length();
}