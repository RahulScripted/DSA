// Given an integer n, flip all its bits i.e. if the given bit is 1, change it to 0 and vice versa.



#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int temp = num;
    num = num | (num >> 1);
    num = num | (num >> 2);
    num = num | (num >> 4);
    num = num | (num >> 8);

    num = temp ^ num;
    cout<<"After flipping all bits : "<<num<<endl;
}