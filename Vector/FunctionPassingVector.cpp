// Function passing through vector

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int> &v){ // Pass By Reference 
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
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
    print(v);
}