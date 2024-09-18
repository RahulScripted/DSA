// Sort an array by decreasing order by using merge sort

#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& arr1,vector<int>& arr2,vector<int>& v){
    int i = 0,j = 0,k = 0;
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] >= arr2[j]) v[k++] = arr1[i++];
        else v[k++] = arr2[j++];
    }
    while(i < arr1.size()) v[k++] = arr1[i++];
    while(j < arr2.size()) v[k++] = arr2[j++];
}
void mergeSort(vector<int>& v){
    int n = v.size();
    // Base Case
    if(n == 1) return;
    int size1 = n / 2,size2 = n - (n / 2);
    vector<int>arr1(size1); 
    for(int i = 0;i < size1;i++){
        arr1[i] = v[i];
    } 
    vector<int>arr2(size2);
    for(int i = 0;i < size2;i++){
        arr2[i] = v[i + size1];
    } 
    mergeSort(arr1);
    mergeSort(arr2);
    merge(arr1,arr2,v);
    arr1.clear();
    arr2.clear();
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
    cout<<"Before Sorting : ";
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    cout<<"After Sorting : ";
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
}