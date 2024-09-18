// Positive missing element 

#include<iostream>
#include<vector>
using namespace std;
int PositiveMissing(vector<int>&v){
    for(int i = 0;i < v.size();i++){
        if(v[i] != i) return i;
    }
}
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
    cout<<"Smallest Missing positive number is : "<<PositiveMissing(v);
}