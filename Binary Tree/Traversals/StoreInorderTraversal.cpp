// Given the root of a binary tree, return the inorder traversal of its nodes' values.




#include<iostream>
#include<vector>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void inOrder(TreeNode* root,vector<int>&ans){
    if(root == NULL) return;
    inOrder(root->left,ans);
    ans.push_back(root->val);
    inOrder(root->right,ans);
}

vector<int> inorderTraversal(TreeNode* root) {
    vector<int>ans;
    inOrder(root,ans);
    return ans;
}

void display(vector<int>& res){
    int n = res.size();
    for(int i = 0;i < n;i++) cout<<res[i]<<" ";
    cout<<endl;
}

int main(){
    TreeNode* a = new TreeNode(10);
    TreeNode* b = new TreeNode(20);
    TreeNode* c = new TreeNode(30);
    TreeNode* d = new TreeNode(3);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(7);
    TreeNode* g = new TreeNode(11);

    // Building connection
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    cout<<"Preorder traversals: ";
    vector<int>res = inorderTraversal(a);
    display(res);
}