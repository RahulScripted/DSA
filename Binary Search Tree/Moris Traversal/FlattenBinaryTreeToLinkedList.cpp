// Given the root of a binary tree, flatten the tree into a "linked list": The "linked list" should use the same TreeNode class where the right child pointer points to the next node in the list and the left child pointer is always null. The "linked list" should be in the same order as a pre-order traversal of the binary tree.




#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int val) : val(val), left(NULL), right(NULL) {}
};

class Solution {
public:
    void findPredecessor(TreeNode* root, vector<TreeNode*>& ans) {
        if (root == NULL) return;
        ans.push_back(root);
        findPredecessor(root->left, ans);
        findPredecessor(root->right, ans);
    }

    void flatten(TreeNode* root) {
        // Method - 3 [Moris Traversal]
        TreeNode* curr = root;
        TreeNode* pred;
        while(curr != NULL){
            if(curr -> left != NULL){
                TreeNode* r = curr -> right;
                curr -> right = curr -> left;
                pred = curr -> left;
                while(pred -> right != NULL) pred = pred -> right;
                pred -> right = r;
                curr = curr -> left;
            }
            else curr = curr -> right;
        }
        TreeNode* temp = root;
        while(temp != NULL){
            temp->left = NULL;
            temp = temp ->right;
        }

        // Method - 2
        // if(root == NULL) return;
        // TreeNode* left = root -> left; // store LST
        // TreeNode* right = root -> right; // store RST

        // // Set Both NULL
        // root -> left = NULL;
        // root -> right = NULL;

        // // Recursion
        // flatten(left);
        // flatten(right);

        // // Set root's right to it's left value
        // root -> right = left;

        // // Set root's right to it's right value
        // TreeNode* temp = root;
        // while(temp -> right != NULL) temp = temp -> right;
        // temp -> right = right;


        // Method - 1
        // if (root == NULL) return; 
        // vector<TreeNode*> ans;
        // findPredecessor(root, ans);

        // int n = ans.size();
        // for (int i = 0; i < n - 1; ++i) {
        //     ans[i]->right = ans[i + 1];
        //     ans[i]->left = NULL; 
        // }
        
        // // For last node
        // if (n > 0) {
        //     ans[n - 1]->right = NULL;
        //     ans[n - 1]->left = NULL;
        // }
    }
};

TreeNode* createTree(const vector<int>& values) {
    if (values.empty()) return NULL;
    
    TreeNode* root = new TreeNode(values[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while (!q.empty() && i < values.size()) {
        TreeNode* node = q.front();
        q.pop();
        
        if (values[i] != INT_MAX) {
            node->left = new TreeNode(values[i]);
            q.push(node->left);
        }
        i++;
        if (i >= values.size()) break;

        if (values[i] != INT_MAX) {
            node->right = new TreeNode(values[i]);
            q.push(node->right);
        }
        i++;
    }
    return root;
}

void printFlattenedTree(TreeNode* root) {
    TreeNode* curr = root;
    while (curr != NULL) {
        cout << curr->val << " ";
        curr = curr->right;
    }
    cout << endl;
}

int main() {
    vector<int> values = {1, 2, 5, 3, 4, INT_MAX, 6};
    TreeNode* root = createTree(values);

    Solution sol;
    sol.flatten(root);

    cout << "Flattened Tree: ";
    printFlattenedTree(root);
}