// Write a program to print all alphabets from a to z.

#include<iostream>
using namespace std;
int main(){
    char ch = 'a';
    do{
        cout<<ch<<" ";
        ch++;
    } while (ch <= 'z');
}