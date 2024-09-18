// Print in reverse order by reverse function

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
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
    reverse(v.begin(),v.end());
    cout<<"After reverse : ";
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
}