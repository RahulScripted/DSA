// There is only one character 'A' on the screen of a notepad. You can perform one of two operations on this notepad for each step:

// 1.  Copy All: You can copy all the characters present on the screen (a partial copy is not allowed).

// 2.  Paste: You can paste the characters which are copied last time.

// Given an integer n, return the minimum number of operations to get the character 'A' exactly n times on the screen.




#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}

int highestFactor(int n){
    for(int i = 2;i <= sqrt(n);i++){
        if(n % i == 0) return n / i;
    }
    return 1;
}   

int minSteps(int n) {
    int count = 0;
    while(n > 1){
        if(isPrime(n)){
            count += n;
            break;
        }
        int hf = highestFactor(n);
        count += n / hf;
        n = hf;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<"Minimum steps will be : "<<minSteps(n);
}