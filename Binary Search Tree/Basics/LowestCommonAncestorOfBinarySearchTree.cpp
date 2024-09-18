// Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST.




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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val > p->val && root -> val > q -> val) return lowestCommonAncestor(root->left,p,q);
        else if(root->val < p->val && root -> val < q -> val) return lowestCommonAncestor(root->right,p,q);
        else return root;
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

void Display(TreeNode* &a){
    // Base Case
    if(a == NULL) return;
    cout<<a->val<<" ";
    Display(a->left);
    Display(a->right);
}

int main() {
    Solution solution;
    vector<int> data = {6,2,8,0,4,7,9,INT_MIN,INT_MIN,3,5};
    TreeNode* root = buildTreeFromQueue(data);
    TreeNode* p = new TreeNode(4);
    TreeNode* q = new TreeNode(2);

    TreeNode* lca = solution.lowestCommonAncestor(root, p, q);

    cout<<"Lowest common ancestor : "<<lca->val<<endl;
}