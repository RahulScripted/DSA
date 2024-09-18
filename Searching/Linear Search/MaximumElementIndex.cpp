// Find maximum element

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
    int maxi = INT_MIN;
    int idx = -1;
    for(int i = 0;i < v.size();i++){
        if(v[i] > maxi){
            maxi = v[i];
            idx = i;
        }
    }
    cout<<"Maximum element will be : "<<maxi<<endl;
    cout<<"Maximum element index will be : "<<idx<<endl;
}