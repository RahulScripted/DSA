// Given a C++ program output how many set bits are there without using any built-in function



#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int countBits = 0;
    while(num != 0){
        countBits++;
        num = (num & (num - 1));
    }
    cout<<countBits<<endl;
}