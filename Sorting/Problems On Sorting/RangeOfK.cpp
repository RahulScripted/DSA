// Given an array, arr[] containing 'n' integers, the task is to find an integer(say K) such that after replacing each and every index of the array by |ai - k| where i range between 1 to n, results in a sorted array. If no such integer exists that satisfies the above condition then return -1.


#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
float min(float a,float b){
    if(a < b) return a;
    else return b; 
}
float max(float a,float b){
    if(a > b) return a;
    else return b; 
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>v;
    cout<<"Enter input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    float kMin = INT_MIN; 
    float kMax = INT_MAX;
    bool flag = true;
    for(int i = 0;i < v.size() - 1;i++){
        if(v[i] > v[i + 1]){
            kMin = max(kMin,(v[i] + v[i + 1]) / 2.0);
        }
        else{
            kMax = min(kMax,(v[i] + v[i + 1]) / 2.0);
        }
        if(kMin > kMax){
            flag = false;
            break;
        }
    }
    if(flag == false) return -1;
    else if(kMin == kMax){
        if(kMin - (int)kMin == 0){
            cout<<"Only 1 value of K exist that is : "<<kMin;
        }
        else{
            cout<<-1;
        }
    }
    else{
        cout<<"Range of k is : ["<<kMin<<","<<(int)kMax<<"]";
    } 
}