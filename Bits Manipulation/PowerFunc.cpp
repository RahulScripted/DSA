// Write a C++ program to calculate power by logarithm by using bit manipulation


#include<iostream>
using namespace std;
int powerCalc(int base,int power){
    int res = 1;
    while(power > 0){
        if(power & 1) res *= base; // If Power is odd
        power >>= 1; // If power is even
        base *= base;
    }
    return res;
}
int main(){
    int base,power;
    cout<<"Enter the value of base : ";
    cin>>base;
    cout<<"Enter the value of power : ";
    cin>>power;
    cout<<base<<" to the power "<<power<<" will be : "<<powerCalc(base,power);
}