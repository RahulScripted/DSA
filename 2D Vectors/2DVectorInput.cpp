#include<iostream>
#include<vector>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    cout<<"Enter no. of cols : ";
    cin>>cols;
    vector<vector<int>>mat;
    cout<<"Give input : ";
    for(int i = 0;i < rows;i++){
        vector<int>a;
        for(int j = 0;j < cols;j++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        mat.push_back(a);
    }
    cout<<"Matrix : "<<endl;
    for(int i = 0;i < rows;i++){
        for(int j = 0;j < cols;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}