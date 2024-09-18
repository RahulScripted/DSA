// Given a positive integer, return true if it is a power of 2.

#include<iostream>
using namespace std;
bool powerOf2(int n){
    if(n == 1) return true;
    else if(n % 2 != 0) return false;
    return powerOf2(n / 2); 
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    if(powerOf2(n)) cout<<n<<" is power of 2";
    else cout<<n<<" is not power of 2";
}