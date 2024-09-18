// Write a C++ program to calculate power by logarithm


#include<iostream>
using namespace std;
int powerCalc(int base,int power){
    if(power == 0) return 1;
    else if(power == 1) return base;
    int ans = powerCalc(base,power/2);
    return (power % 2 == 0) ? (ans * ans) : (ans * ans * base);
}
int main(){
    int base,power;
    cout<<"Enter the value of base : ";
    cin>>base;
    cout<<"Enter the value of power : ";
    cin>>power;
    cout<<base<<" to the power "<<power<<" will be : "<<powerCalc(base,power);
}