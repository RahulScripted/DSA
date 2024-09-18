// Given the root of a binary tree, imagine yourself standing on the left side of it, return the values of the nodes you can see ordered from top to bottom.




#include <iostream>
#include <vector>
#include <queue>
#include <climits>
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
    void preorder(TreeNode* root, vector<int> &ans, int level) {
        if (root == NULL) return;
        if (ans.size() == level) ans.push_back(root->val);
        preorder(root->left, ans, level + 1);
        preorder(root->right, ans, level + 1);
    }

    vector<int> leftSideView(TreeNode* root) {
        vector<int> ans;
        preorder(root, ans, 0);
        return ans;
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

int main() {
    Solution solution;
    vector<int> data = {1,2,3,INT_MIN,5,INT_MIN,4};
    
    TreeNode* root = buildTreeFromQueue(data);
    vector<int> rightView = solution.leftSideView(root);

    cout << "Right Side View : ";
    for (int val : rightView) {
        cout << val << " ";
    }
    cout << endl;
}