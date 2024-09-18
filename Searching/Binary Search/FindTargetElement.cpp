// Find Target element

#include<iostream>
#include<vector>
using namespace std;
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
    int target;
    cout<<"Enter a target element : ";
    cin>>target;
    int idx = -1,i = 0,j = v.size() - 1;
    bool flag = false;
    while(i <= j){
        int mid = (i + j) / 2;
        if(v[mid] == target){
            idx = mid;
            flag = true;
            break;
        }
        else if(v[mid] < target){
            i = mid;
        }
        else{
            j = mid + 1;
        }
    }
    if(flag == false){
        cout<<"Target element found at index : "<<idx;
    }
    else{
        cout<<"Target element found at index : "<<idx;
    } 
}