// Given an array with N distinct elements, convert the given array to a form where all elements are in the range from 0 to N-1. The order of elements is the same,i.e., 0 is placed in the place of the smallest element,1 is placed for the second smallest element,..... N-1 is placed for the largest element.


#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>v;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>result(size,0);
    int x = 0;
    for(int i = 0;i < v.size();i++){
        int mini = INT_MAX;
        int minIdx = -1;
        for(int j = 0;j < v.size();j++){
            if(result[j] == 1) continue;
            else{
                if(mini > v[j]){
                    mini = v[j];
                    minIdx = j;
                }
            }
        }
        v[minIdx] = x;
        v[minIdx] = 1;
        ++x;
    }
    cout<<"After replacing : ";
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
}