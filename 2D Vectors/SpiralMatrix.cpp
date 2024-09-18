#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    if (matrix.empty()) return {};
    const int m = matrix.size();
    const int n = matrix[0].size();
    vector<int> ans;
    int r1 = 0;
    int c1 = 0;
    int r2 = m - 1;
    int c2 = n - 1;
    while (ans.size() < m * n) {
        for (int j = c1; j <= c2 && ans.size() < m * n; ++j)
        ans.push_back(matrix[r1][j]);
        for (int i = r1 + 1; i <= r2 - 1 && ans.size() < m * n; ++i)
            ans.push_back(matrix[i][c2]);
        for (int j = c2; j >= c1 && ans.size() < m * n; --j)
        ans.push_back(matrix[r2][j]);
        for (int i = r2 - 1; i >= r1 + 1 && ans.size() < m * n; --i)
        ans.push_back(matrix[i][c1]);
        ++r1, ++c1, --r2, --c2;
    }
    return ans;
}
int main(){
    int size;
    cout<<"Enter matrix size : ";
    cin>>size;
    vector<vector<int>>mat;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        vector<int>a;
        for(int j = 0;j < size;j++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        mat.push_back(a);
    }
    cout<<"Matrix : "<<endl;
    for(int i = 0;i < size;i++){
        for(int j = 0;j < size;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Spiral order will be : ";
    vector<int>result = spiralOrder(mat);
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
}