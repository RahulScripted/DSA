// Print in reverse order by reverse function by part of the array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverse(int first,int last,vector<int> &v){
    int i = first,j = last;
    while(i <= j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
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
    int k;
    cout<<"Enter the k step : ";
    cin>>k;
    int n = v.size();
    reverse(0,n - k -1,v);
    reverse(n - k,n - 1,v);
    reverse(0,n - 1,v);
    cout<<"After reverse : ";
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
}