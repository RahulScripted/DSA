// Merge 2 sorted array

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
}
void merge(vector<int> &v1,vector<int> &v2,vector<int>&v3){
    int i = 0,j = 0,k = 0;
    while(i <= v1.size() && j <= v2.size()){
        if(v1[i] < v2[j]){
            v3[k] = v1[i];
            k++;
            i++;
        }
        else{
            v3[k] = v2[j];
            j++;
            k++;
        }
    }
    while(i <= v1.size()){
        v3[k] = v1[i];
        k++;
        i++;
    }
    while(j <= v2.size()){
        v3[k] = v2[j];
        k++;
        j++;
    }
}
int main(){
    int size1,size2;
    cout<<"Enter the size of the array : ";
    cin>>size1;
    cout<<"Enter the size of the array : ";
    cin>>size2;
    vector<int> v1;
    cout<<"Give input for 1st sorted input array : ";
    for(int i = 0;i < size1;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    vector<int> v2;
    cout<<"Give input for 2nd sorted input array : ";
    for(int i = 0;i < size2;i++){
        int x;
        cin>>x;
        v2.push_back(x);
    }
    cout<<"1st Array : ";
    display(v1);
    cout<<endl<<"2nd Array : ";
    display(v2);
    vector<int>result(v1.size() + v2.size());
    merge(v1,v2,result);
    cout<<endl<<"After merge : ";
    display(result);
}