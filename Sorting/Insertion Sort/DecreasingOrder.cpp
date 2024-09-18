// Sort in decreased order

#include<iostream>
#include<vector>
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
    // Insertion Sort
    for(int i = 1;i < v.size();i++){
        int j = i;
        while(j >= 1 && v[j] > v[j - 1]){
            swap(v[j],v[j - 1]);
            j--;
        }
    }
    cout<<"After sorting : ";
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
}