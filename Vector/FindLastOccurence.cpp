// Find the last occurrence of x in the array

#include<iostream>
#include<vector>
using namespace std;
int LastOccurrence(vector<int> &v,int target){
    int idx = -1;
    for(int i = 0;i < v.size();i++){
        if(v[i] == target){
            idx = i;
        }
    }
    return idx;
}
int main(){
    int size;
    cout<<"Enter the size of the vector : ";
    cin>>size;
    vector<int> v;
    cout<<"Enter input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target;
    cout<<"Enter the target value : ";
    cin>>target;
    cout<<"Last Occurrence index will be : "<<LastOccurrence(v,target);
}