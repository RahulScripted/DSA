// Given a positive integer, return true if it is a power of 4.

#include<iostream>
using namespace std;
bool powerOf4(int n){
    if(n == 1) return true;
    else if(n % 4 != 0) return false;
    return powerOf4(n / 4); 
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    if(powerOf4(n)) cout<<n<<" is power of 4";
    else cout<<n<<" is not power of 4";
}