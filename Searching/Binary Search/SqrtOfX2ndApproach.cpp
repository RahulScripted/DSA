// Find the square root of X 

#include<iostream>
using namespace std;
int squareRoot(int x){
    // 2nd approach
    int lo = 0;
    int ri = x;
    while(lo <= ri){
        int mid = lo + (ri - lo) / 2;
        long long m = (long long)mid;
        long long y = (long long)x;
        if(m * m == y) return mid;
        else if(m * m > y) ri = mid - 1;
        else lo = mid + 1;
    }
    return ri;
}
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<"Square root of "<<x<<" will be : "<<squareRoot(x);
}