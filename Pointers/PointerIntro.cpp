// Write a program to print address of a variable by storing it

#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int *p = &x;
    cout<<"The address : "<<p;
}