// Write a C++ program to find HCF of two numbers

#include<iostream>
using namespace std;
int HCF(int a,int b){
    // Base Case
    if(a == 0) return b;
    return HCF(b % a,a); 
    // Time Complexity -> 0(log(a + b))
}
int main(){
    int a = 65,b = 60;
    cout<<"HCF will be : "<<HCF(a,b);
}