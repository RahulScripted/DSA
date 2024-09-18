// Given a positive integer num, return true if num is a perfect square or false otherwise.

#include<iostream>
using namespace std;
bool ValidPerfect(int num){
    int left = 1,right = num;
    while(left < right){
        int mid = left + (right - left) / 2;
        if(mid >= (num / mid)) right = mid;
        else left = mid + 1;
    }
    return left * left == num;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(ValidPerfect(num) == true){
        cout<<num<<" is a perfect square";
    }
    else{
        cout<<num<<" is not a perfect square";
    }
}