// No. of iteration in Bubble Sort

#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&v){
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v;
    cout<<"Give input : ";
    for(int i = 0;i < 6;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Before Sorting : ";
    print(v);
    // Bubble Sorting
    int count = 0;
    for(int i = 0;i < v.size();i++){
        bool flag = true;
        for(int j = 0;j < v.size() - 1 - i;j++){
            if(v[j] > v[j + 1]){
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                flag = false;
                count++; 
            }
        }
        if(flag == true){
            break;
        }
    }
    cout<<endl<<"After Sorting : ";
    print(v);
    cout<<endl<<"No. of swap needed : "<<count;
}