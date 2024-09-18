// Sort 0 & 1 & 2's by Three Pointer

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
}
void SortZeroOneTwo(vector<int> &v){
    int i = 0,j = v.size() - 1,mid = 0;
    while(mid <= j){
        if(v[mid] == 2){
            int temp = v[mid];
            v[mid] = v[j];
            v[j] = temp;
            j--;
        }
        else if(v[mid] == 0){
            int temp = v[mid];
            v[mid] = v[i];
            v[i] = temp;
            mid++;
            i++;
        }
        else{
            mid++;
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
    SortZeroOneTwo(v);
    cout<<endl<<"After Sort : ";
    display(v);
}