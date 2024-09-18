// Given an integer n, find the maximum power of two that is smaller than n.


#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    num = num | (num >> 1);
    num = num | (num >> 2);
    num = num | (num >> 4);
    num = num | (num >> 8);
    num = num | (num >> 16);

    num = (num + 1) / 2;
    cout<<"The maximum power of two will be : "<<num<<endl;
}