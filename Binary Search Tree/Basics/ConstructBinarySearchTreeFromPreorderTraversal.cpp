// Given an array of integers preorder, which represents the preorder traversal of a BST (i.e., binary search tree), construct the tree and return its root.




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

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* newNode = new TreeNode(val);
        if(root == NULL) return newNode;
        if(root->val > val){
            if(root->left == NULL) root->left = newNode;
            else insertIntoBST(root->left,val);
        }
        else{
            if(root->right == NULL) root->right = newNode;
            else insertIntoBST(root->right,val);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n = preorder.size();
        TreeNode* root = new TreeNode(preorder[0]);
        for(int i = 1;i < n;i++){
            insertIntoBST(root,preorder[i]);
        }
        return root;
    }
};

void BFS(TreeNode* a){
    queue<TreeNode*>q;
    q.push(a);
    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
    }
    cout<<endl;
}

int main() {
    Solution solution;
    vector<int> data = {8,5,1,7,10,12};
    TreeNode* root = solution.bstFromPreorder(data);
    BFS(root);
}