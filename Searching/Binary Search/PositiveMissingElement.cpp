// Positive missing element 


#include<iostream>
#include<vector>
using namespace std;
int PositiveMissing(vector<int>&v){
    int i = 0,j = v.size() - 1;
    while(i <= j){
        int mid = i + (j - i) / 2;
        if(v[mid] == mid) i = mid + 1;
        else return mid;
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