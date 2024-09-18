// Deletion a tree node if there are 2 child exist using predecessor




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

Tree* predecessor(Tree* root,int val){
    Tree* pred = root->left;
    while(pred->right) pred = pred->right;
    return pred;
}

Tree* deleteNode(Tree* root,int val){
    if(root == NULL) return NULL;
    if(root->val == val){
        if(root->left == NULL && root->right == NULL) return NULL;
        else if(root->left == NULL || root->right == NULL){
            if(!root->left) return root->left;
            else return root->right;
        }
        else{
            Tree* predecessorVal = predecessor(root,val);
            root->val = predecessorVal->val;
            root->left = deleteNode(root->left,predecessorVal->val);
        }
    }
    if(root->val > val) root->left = deleteNode(root->left,val);
    else if(root->val < val) root->right = deleteNode(root->right,val);
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
    deleteNode(root,val);
    inorderView(root);
}