// Given the root of a binary tree, return the bottom-up level order traversal of its nodes' values. (i.e., from left to right, level by level from leaf to root).




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

void Display(TreeNode* root){
    // Base Case
    if(root == NULL) return;
    cout<<root->val<<" ";
    Display(root->left);
    Display(root->right);
}

int levels(TreeNode* root){
    if(root == NULL) return 0;
    return 1 + max(levels(root -> left),levels(root -> right));
}
    
void nthLevel(TreeNode* root,int currentLevel,int level,vector<int>&v){
    if(root == NULL) return;
    if(currentLevel == level){
        v.push_back(root -> val);
        return;
    }
    nthLevel(root->left,currentLevel + 1,level,v);
    nthLevel(root->right,currentLevel + 1,level,v);
}

void lOrder(TreeNode* root,vector<vector<int>>&ans){
    int n = levels(root);
    for(int i = (n - 1);i >= 0;i--){
        vector<int>v;
        nthLevel(root,0,i,v);
        ans.push_back(v);
    }
}
    
vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>>ans;
    lOrder(root,ans);
    return ans;
}

int main(){
    TreeNode* root = new TreeNode(10);
    TreeNode* b = new TreeNode(20);
    TreeNode* c = new TreeNode(30);
    TreeNode* d = new TreeNode(3);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(7);
    TreeNode* g = new TreeNode(11);

    // Building connection
    root->left = b;
    root->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    cout<<"Our tree : ";
    Display(root);
    cout<<endl;
    vector<vector<int>>ans = levelOrder(root);
    for(int i = 0;i < ans.size();i++){
        for(int j = 0;j < ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}