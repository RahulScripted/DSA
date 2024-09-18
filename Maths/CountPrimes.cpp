// Given an integer n, return the number of prime numbers that are strictly less than n.



#include<bits/stdc++.h>
using namespace std;
void getSieve(vector<bool>& sieve,int n){
    for(int i = 2;i <= n;i++){
        if(sieve[i] == 1){
            for(long long j = i;(i * j) <= n;j++){
                sieve[i * j] = 0;
            }
        }
    }
}
int countPrimes(int n){
    vector<bool>sieve(n + 1,1);
    getSieve(sieve,n);

    int count = 0;
    for(int i = 2;i <= n;i++){
        if(sieve[i] == 1) count++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<"No. of prime numbers are : "<<countPrimes(n);
}