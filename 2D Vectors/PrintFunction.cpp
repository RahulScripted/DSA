// Print 2D vector in Function

#include<vector>
#include<iostream>
using namespace std;
void print(vector<vector<int>>&v){
    for(int i = 0;i < v.size();i++){
        for(int j = 0;j < v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>>v = {{1,2,3},{4,5},{6,7,8,9}};
    cout<<"Print matrix : "<<endl;
    print(v);
}