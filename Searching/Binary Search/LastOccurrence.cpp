// Last Occurrence

#include<iostream>
#include<vector>
using namespace std;
int LastOccurrence(vector<int>&v,int target){
    int i = 0,j = v.size();
    while(i <= j){
        int mid = i + (j - i) / 2;
        if(v[mid] == target){
            if(v[mid + 1] != target){
                return mid;
            }
            else{
                i = mid + 1;
            }
        }
        else if(v[mid] < target) i = mid + 1;
        else j = mid - 1;
    }
    return -1;
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int> v;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target;
    cout<<"Enter the target element : ";
    cin>>target;
    cout<<"Last occurrence of "<<target<<"'s index will be : "<<LastOccurrence(v,target);
}