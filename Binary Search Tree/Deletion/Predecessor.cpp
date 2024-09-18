// Inorder predecessor for a given val




#include <iostream>
#include <vector>
#include <climits>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int findPredecessor(vector<int>& data,int key){
    int n = data.size();
    for(int i = 0;i < n;i++){
        if(data[i] == key) return data[i - 1];
    }
    return -1;
}

int main() {
    vector<int> data = {20,30,40,50,60,70,80};
    int key;
    cout<<"Enter the value : ";
    cin>>key;
    cout<<"Predecessor of "<<key<<" will be : "<<findPredecessor(data,key)<<endl;
}