// Pascal Triangle Pattern by Function

#include<vector>
#include<iostream>
using namespace std;
vector<vector<int>>pascal(int numRows){
    vector<vector<int>>v;
    for(int i = 0;i < numRows;i++){
        vector<int>a(i + 1);
        v.push_back(a);
        for(int j = 0;j <= i;j++){
            if(j == 0 || j == i){
                v[i][j] = 1;
            }
            else{
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }
    }
    return v;
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<vector<int>>v = pascal(size);
    // Print
    for(int i = 0;i < v.size();i++){
        for(int j = 0;j < v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}