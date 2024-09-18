// Given an integer number n, which is a decimal representation of Gray Code. Find the binary equivalent of the Gray Code & return the decimal representation of the binary equivalent.

#include<iostream>
using namespace std;
int grayToBinary(int n){
    int res = n;
    while(n > 0){
        n >>= 1; // n >>= 1 means n = n / 2
        res ^= n; // XOR operation
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"the binary equivalent of "<<n<<" is : "<<grayToBinary(n);
}