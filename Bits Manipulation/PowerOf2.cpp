// Given an integer n, return true if it is a power of two. Otherwise, return false.


#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n) {
    if(n <= 0){
        return false;
    }
    return (n & (n - 1)) == 0;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(isPowerOfTwo(n)) cout<<n<<" is a power of 2";
    else cout<<n<<" is a not power of 2";
}