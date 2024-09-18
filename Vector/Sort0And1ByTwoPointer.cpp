// Sort 0 & 1's by Two Pointer

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
}
void SortZeroOne(vector<int> &v){
    int i = 0,j = v.size() - 1;
    while(i <= j){ // Use One Loop
        if(v[i] == 0){
            i++;
        }
        else if(v[j] == 1){
            j--;
        }
        else if(v[i] == 1 && v[j] == 0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
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