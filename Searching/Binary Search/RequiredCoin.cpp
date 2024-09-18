// You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete. Given the integer n, return the number of complete rows of the staircase you will build.

#include<iostream>
using namespace std;
int BuildStaircase(int num){
    long low = 0;
    long right = num;
    while(low <= right){
        long mid = low + (right - low) / 2;
        long coinUsed = mid * (mid + 1) / 2;
        if(coinUsed == num) return (int)mid;
        else if(num < coinUsed) right = mid - 1;
        else low = mid + 1;
    }
    return (int)right; 
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"No. of staircase can be build : "<<BuildStaircase(num)<<" by "<<num<<" coins";
}