// Sort in increased order

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>v;
    cout<<"Give Input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
   for(int i = 0;i < v.size() - 1;i++){
        int mini = INT_MAX;
        int minIdx = i;
        for(int j = i;j < v.size();j++){
            if(mini > v[j]){
                mini = v[j];
                minIdx = j;
            }
        }
        swap(v[i],v[minIdx]);
    }
    cout<<"After sorting : ";
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
}