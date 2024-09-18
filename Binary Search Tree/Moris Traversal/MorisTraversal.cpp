// Moris traversal




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

void morisTraversal(TreeNode* root, vector<int>& ans) {
    if (root == NULL) return;
    
    TreeNode* curr = root;
    while (curr != NULL) {
        if (curr->left == NULL) {
            ans.push_back(curr->val);
            curr = curr->right;
        } 
        else {
            TreeNode* temp = curr->left;
            // Find predecessor
            while (temp->right != NULL && temp->right != curr) temp = temp->right;

            // Link
            if (temp->right == NULL) {
                temp->right = curr;
                curr = curr->left;
            } 
            // Unlink
            else {
                temp->right = NULL;
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
    }
}

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

void inorderTraversal(TreeNode* root) {
    if (root == NULL) return;    
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

int main() {
    vector<int> values = {1, 2, 3, 4, 5, INT_MAX, 6};
    TreeNode* root = createTree(values);

    // Performing inorder traversal
    cout << "Inorder Traversal of the Tree : ";
    inorderTraversal(root);
    cout << endl;

    vector<int> ans; 
    morisTraversal(root, ans);

    cout << "Morris Traversal: ";
    for (int i = 0; i < ans.size(); i++) 
        cout << ans[i] << " ";
    cout << endl;

    return 0;
}
