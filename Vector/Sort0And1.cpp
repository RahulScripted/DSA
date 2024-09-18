// Sort 0 & 1's 

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
}
void SortZeroOne(vector<int> &v){ // Use 2 for Loop
    int count0 = 0,count1 = 0;
    for(int i = 0;i < v.size();i++){
        if(v[i] == 0) count0++;
        else count1++;
    }
    for(int i = 0;i < v.size();i++){
        if(i < count0) v[i] = 0;
        else v[i] = 1;
    }
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
    cout<<"Before Sort : ";
    display(v);
    SortZeroOne(v);
    cout<<endl<<"After Sort : ";
    display(v);
}