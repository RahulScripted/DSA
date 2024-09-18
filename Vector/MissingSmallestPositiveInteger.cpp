// WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.

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
    cout<<"Missing smallest positive integer will be : ";
    for(int i = 0;i < size;i++){
        if(arr[i] != i){
            cout<<i;
            break;
        }
    }
}