// Given a positive integer, return true if it is a power of 3.

#include<iostream>
using namespace std;
bool powerOf3(int n){
    if(n == 1) return true;
    else if(n % 3 != 0) return false;
    return powerOf3(n / 3); 
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    if(powerOf3(n)) cout<<n<<" is power of 3";
    else cout<<n<<" is not power of 3";
}