// Sort 0 & 1 & 2's 

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
}
void SortZeroOneTwo(vector<int> &v){ // Use 2 for Loop
    int count0 = 0,count1 = 0,count2 = 0;
    for(int i = 0;i < v.size();i++){
        if(v[i] == 0) count0++;
        else if(v[i] == 1) count1++;
        else count2++;
    }
    for(int i = 0;i < v.size();i++){
        if(i < count0) v[i] = 0;
        else if(i < (count0 + count1)) v[i] = 1;
        else v[i] = 2;
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
    SortZeroOneTwo(v);
    cout<<endl<<"After Sort : ";
    display(v);
}