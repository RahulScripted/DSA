// Given an integer n, find the maximum power of two that is smaller than n.


#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int temp;
    while(num != 0){
        temp = num;
        num = (num & (num - 1));
    }
    cout<<"The maximum power of two will be : "<<temp<<endl;
}