// Print all the elements of vector in reverse order

#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& v,int currIdx){
    // Base Case
    if(currIdx == v.size()) return;
    print(v,currIdx + 1);
    cout<<v[currIdx]<<" ";
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
    cout<<"Reversed vector : ";
    print(v,0);
}