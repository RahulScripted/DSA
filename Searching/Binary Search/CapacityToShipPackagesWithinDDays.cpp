// A conveyor belt has packages that must be shipped from one port to another within days days. The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.


#include<iostream>
#include<climits>
#include<vector>
using namespace std;
bool check(int mid,vector<int>&weights,int days){
    int n = weights.size();
    int m = mid;
    int count = 1;
    for(int i = 0;i < n;i++){
        if(m >= weights[i]) m -= weights[i];
        else{
            count++;
            m = mid;
            m -= weights[i];
        }
    }
    if(count > days) return false;
    else return true;
}
int shipWithinDays(vector<int>& weights, int days) {
    int n = weights.size();
    int maxi = INT_MIN;
    int sum = 0;
    for(int i = 0;i < n;i++){
        sum += weights[i];
        if(maxi < weights[i]) maxi = weights[i];
    }
    int lo = maxi;
    int hi = sum;
    int minCapacity = sum;
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(check(mid,weights,days)){
            minCapacity = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    return minCapacity;
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>weights;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        weights.push_back(x);
    }
    int days;
    cout<<"Enter no. of days : ";
    cin>>days;
    cout<<"Minimum capacity will be : "<<shipWithinDays(weights,days);
}