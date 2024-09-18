// Given two sorted matrices mat1 and mat2 of size n x n of elements. Each matrix contains numbers arranged in strictly ascending order, with each row sorted from left to right, and the last element of a row being smaller than the first element of the next row. You're given a target value, x, your task is to find and count all pairs {a, b} such that a is from mat1 and b is from mat2 where sum of a and b is equal to x.

#include<iostream>
#include<vector>
using namespace std;
int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x){
	int size = n * n;
    int l = 0, r = size - 1;
    int cnt = 0; 
    while (l < size && r >= 0){    
        int sum = mat1[l / n][l % n] + mat2[r / n][r % n];  
        if (sum == x) {
            l++;
            r--;
            ++cnt;
        }
        else if (sum > x) --r;
        else ++l;
    }    
    return cnt;
}
int main(){
    int size;
    cout<<"Enter matrix size : ";
    cin>>size;
    vector<vector<int>>mat1;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        vector<int>a;
        for(int j = 0;j < size;j++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        mat1.push_back(a);
    }
    vector<vector<int>>mat2;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        vector<int>a;
        for(int j = 0;j < size;j++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        mat2.push_back(a);
    }
    cout<<"First matrix : "<<endl;
    for(int i = 0;i < size;i++){
        for(int j = 0;j < size;j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Second matrix : "<<endl;
    for(int i = 0;i < size;i++){
        for(int j = 0;j < size;j++){
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter target : ";
    cin>>target;
    cout<<"Count all pairs such which is equal to "<<target<<" will be : "<<countPairs(mat1,mat2,size,target);
}