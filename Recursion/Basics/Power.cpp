// Make a function which calculates power of a raise to power b using recursion

#include<iostream>
using namespace std;
int power(int a,int b){
    if(a == 0 && b == 0){
        cout<<"Not defined";
        return -100;
    }
    if(b == 0) return 1;
    return a * power(a,b - 1);
}
int main(){
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<a<<" raise to power "<<b<<" is : "<<power(a,b);
}