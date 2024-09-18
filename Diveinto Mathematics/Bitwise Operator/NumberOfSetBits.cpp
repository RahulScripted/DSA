// Given a C++ program output how many set bits are there

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"No. of set bits are : "<<__builtin_popcount(num);

    // __builtin_popcount() -> Built-in function
}