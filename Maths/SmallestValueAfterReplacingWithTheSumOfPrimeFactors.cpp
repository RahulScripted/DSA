// You are given a positive integer n. Continuously replace n with the sum of its prime factors. Note that if a prime factor divides n multiple times, it should be included in the sum as many times as it divides n. Return the smallest value n will take on.


#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}

int smallestValue(int n){
    if(isPrime(n)) return n;

    int sum = 0;
    for(int  i = 2;i < sqrt(n);i++){
        if(isPrime(i) && (n % i) == 0){
            int m = n;
            while((m % i) == 0){
                sum += i;
                m /= i;
            }
        }
    }

    for(int i = sqrt(n);i >= 1;i--){
        if(isPrime(n / i) && (n % i) == 0){
            int m = n;
            while((m % (n / i)) == 0){
                sum += (n / i);
                m /= (n / i);
            }
        }
    }
    if(sum == n) return n;
    return smallestValue(sum);
}
int main(){
    cout<<smallestValue(60)<<endl;
    cout<<smallestValue(49)<<endl;
}