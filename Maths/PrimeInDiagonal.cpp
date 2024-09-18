// You are given a 0-indexed two-dimensional integer array nums. Return the largest prime number that lies on at least one of the diagonals of nums. In case, no prime is present on any of the diagonals, return 0.



#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}
int diagonalPrime(vector<vector<int>>& nums) {
    int ans = 0;
    for (int i = 0; i < nums.size(); ++i) {
        const int a = nums[i][i];
        const int b = nums[i][nums.size() - i - 1];
        if (isPrime(a)) ans = max(ans, a);
        if (isPrime(b)) ans = max(ans, b);
    }
    return ans;
}
int main(){
    vector<vector<int>> nums = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<diagonalPrime(nums)<<endl;
}