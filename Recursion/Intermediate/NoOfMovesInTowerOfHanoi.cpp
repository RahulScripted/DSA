// Write a C++ program to print no. of minimum moves are required to go from source to destination in Tower of Hanoi.


#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of disk : ";
    cin>>n;
    cout<<"No. of minimum moves are required : "<<pow(2,n) - 1;
}