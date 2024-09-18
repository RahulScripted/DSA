// Write a program to print value by dereference operator

#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int *p = &x;
    cout<<"Value : "<<*p;
}