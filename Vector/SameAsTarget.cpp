// Find the doublet in the array whose sum is equal to given value x

#include<iostream>
#include<vector>
using namespace std;
vector<int> TwoSum(vector<int> &v,int target){
    for(int i = 0;i < v.size();i++){
        for(int j = i + 1;j < v.size() - 1;j++){
            if(v[i] + v[j] == target){
                return {i,j};
                break;
            }
        }
    }
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
    cout<<"The doublet in the array whose sum is equal to given value target : ";
    vector<int> result = TwoSum(v,target);
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
}