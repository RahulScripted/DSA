// Find the maximum number in the array

#include<iostream>
#include<vector>
#include<limits.h>
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
    int maximum = INT_MIN;
    for(int i = 0;i < v.size();i++){
        if(maximum < v[i]){
            maximum = v[i];
        }
    }
    cout<<"Maximum number will be : "<<maximum;
}