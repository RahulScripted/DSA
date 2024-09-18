// Inorder predecessor for a given key in BST




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

Tree* findPredecessor(Tree* root, int val){
    Tree* pred = root->left;
    while(pred->right) pred = pred->right;
    return pred;
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
    Tree* result = findPredecessor(root,val);
    if(result != NULL) cout<<"Predecessor of "<<val<<" will be : "<<result->val<<endl;
    else cout<<"Predecessor is not found";
}