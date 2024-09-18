// Find minimum element

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
    int mini = INT_MAX;
    int idx = -1;
    for(int i = 0;i < v.size();i++){
        if(v[i] < mini){
            mini = v[i];
            idx = i;
        }
    }
    cout<<"Minimum element will be : "<<mini<<endl;
    cout<<"Minimum element index will be : "<<idx<<endl;
}