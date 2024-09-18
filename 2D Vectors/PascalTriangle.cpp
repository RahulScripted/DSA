// Pascal Triangle Pattern

#include<vector>
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<vector<int>>v;
    for(int i = 1;i <= 5;i++){
        vector<int>a(i);
        v.push_back(a);
    }
    for(int i = 0;i < size;i++){
        for(int j = 0;j <= i;j++){
            if(j == 0 || j == i){
                v[i][j] = 1;
            }
            else{
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }
    }
    // Print
    for(int i = 0;i < v.size();i++){
        for(int j = 0;j < v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}