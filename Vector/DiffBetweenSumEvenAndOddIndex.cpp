// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>arr;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int total = 0;
    for(int i = 0;i < size;i++){
        if(i % 2 != 0){
            total += arr[i];
        }
        else{
            total -= arr[i];
        }
    }
    cout<<"The difference will be : "<<total;
}