// Deletion leaf node from a bst




#include<iostream>
#include<queue>
#include <climits>
using namespace std;

class Tree{
public:
    int val;
    Tree* left;
    Tree* right;
    Tree(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Tree* deleteLeaf(Tree* root,int val){
    if(root->val == val) return NULL;
    if(root->val > val) root->left = deleteLeaf(root->left,val);
    else if(root->val < val) root->right = deleteLeaf(root->right,val);
    return root;
}

Tree* constructBST(vector<int>&inorder,int lo,int hi){
    if (lo > hi) return nullptr;

    int mid = (lo + hi) / 2;
    Tree* root = new Tree(inorder[mid]);
    root->left = constructBST(inorder, lo, mid - 1);
    root->right = constructBST(inorder, mid + 1, hi);
    return root;
}

void inorderView(Tree* root){
    if(root == NULL) return;
    inorderView(root->left);
    cout<<root->val<<" ";
    inorderView(root->right);
}

int main(){
    vector<int> inorder = {20,30,40,50,60,70,80}; 
    int n = inorder.size();
    Tree* root = constructBST(inorder, 0, n - 1);
    cout<<"Our tree : ";
    inorderView(root);
    cout<<endl;
    int val;
    cout<<"Enter the value : ";
    cin>>val;
    cout<<"After deleting "<<val<<" our tree : ";
    deleteLeaf(root,val);
    inorderView(root);
}