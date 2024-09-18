// Given the root of a Binary Search Tree (BST), convert it to a Greater Tree such that every key of the original BST is changed to the original key plus the sum of all keys greater than the original key in BST.




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
    void helper(TreeNode* root,int &sum){
        // Base Case
        if(root == NULL) return;
        helper(root -> right,sum);
        sum += root -> val;
        root -> val = sum;
        helper(root -> left,sum);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        helper(root,sum);
        return root;
    }
};

TreeNode* buildTreeFromQueue(vector<int> data) {
    if (data.empty() || data[0] == -1) return nullptr;

    queue<TreeNode*> q;
    TreeNode* root = new TreeNode(data[0]);
    q.push(root);

    int i = 1;
    while (i < data.size()) {
        TreeNode* current = q.front();
        q.pop();

        // Build left child
        if (data[i] != INT_MIN) {
            current->left = new TreeNode(data[i]);
            q.push(current->left);
        }
        i++;

        // Build right child
        if (i < data.size() && data[i] != INT_MIN) {
            current->right = new TreeNode(data[i]);
            q.push(current->right);
        }
        i++;
    }
    return root;
}

void display(TreeNode* root){
    // Base Case
    if(root == NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}

int main() {
    Solution solution;
    vector<int> data = {4,1,6,0,2,5,7,INT_MIN,INT_MIN,INT_MIN,3,INT_MIN,INT_MIN,INT_MIN,8};
    TreeNode* root = buildTreeFromQueue(data);
    display(root);
    cout<<endl;
    solution.bstToGst(root);
    display(root);
}