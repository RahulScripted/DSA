// Bubble Sort Optimized in increasing order

#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&v){
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
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
    print(v);
    // Bubble Sorting
    for(int i = 0;i < v.size();i++){
        bool flag = true;
        for(int j = 0;j < v.size() - 1 - i;j++){
            if(v[j] > v[j + 1]){
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                flag = false; 
            }
        }
        if(flag == true){
            break;
        }
    }
    cout<<endl<<"After Sorting : ";
    print(v);
}