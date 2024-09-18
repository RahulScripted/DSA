// Print in reverse order

#include<iostream>
#include<vector>
using namespace std;
void Reverse(vector<int> &v){
    vector<int> result;
    for(int i = v.size() - 1;i >= 0;i--){
        result.push_back(v[i]);
    }
    cout<<"Reverse order : ";
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
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
    Reverse(v);
}