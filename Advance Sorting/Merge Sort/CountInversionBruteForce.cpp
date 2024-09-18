// Two elements of an array a, a[i] & a[j] from an inversion if a[i] > a[j] where i < j. Given an array of integers. Find the inversion count in the array.

#include<iostream>
#include<vector>
using namespace std;
int countInversion(vector<int>& v){
    int count = 0;
    int n = v.size() - 1;
    for(int i = 0;i < (n - 1);i++){
        for(int j = (i + 1);j < n;j++){
            if(v[i] > v[j]) count++;
        }
    }
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
    cout<<"Total no. of inversion : "<<countInversion(v);
}