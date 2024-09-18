// Two elements of an array a, a[i] & a[j] from an inversion if a[i] > a[j] where i < j. Given an array of integers. Find the inversion count in the array.

#include<iostream>
#include<vector>
using namespace std;
int inversion(vector<int>&arr1,vector<int>&arr2){
    int count = 0,i = 0,j = 0;
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] > arr2[j]){
            count += (arr1.size() - i);
            j++;
        }
        else i++;
    }
    return count;
}
void mergeSort(vector<int>&arr1,vector<int>&arr2,vector<int>&v){
    int i = 0,j = 0,k = 0;
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] <= arr2[j]) v[k++] = arr1[i++];
        else v[k++] = arr2[j++];
    }
    while(i < arr1.size()) v[k++] = arr1[i++];
    while(j < arr2.size()) v[k++] = arr2[j++];
}
int merge(vector<int>&v){
    int n = v.size(),count = 0;
    // Base Case
    if(n == 1) return 0;
    int size1 = n / 2,size2 = n - (n / 2);
    vector<int>arr1(size1);
    for(int i = 0;i < size1;i++){
        arr1[i] = v[i];
    }
    vector<int>arr2(size2);
    for(int i = 0;i < size2;i++){
        arr2[i] = v[i + size1];
    }
    count += merge(arr1);
    count += merge(arr2);
    count += inversion(arr1,arr2);
    mergeSort(arr1,arr2,v);
    arr1.clear();
    arr2.clear();
    return count;
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
    cout<<"Total no. of inversion : "<<merge(v);
}