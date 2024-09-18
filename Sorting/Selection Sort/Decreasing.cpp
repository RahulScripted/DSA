// Sort in decreased order

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
        int maxi = INT_MIN;
        int maxIdx = i;
        for(int j = i;j < v.size();j++){
            if(maxi < v[j]){
                maxi = v[j];
                maxIdx = j;
            }
        }
        swap(v[i],v[maxIdx]);
    }
    cout<<"After sorting : ";
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
}