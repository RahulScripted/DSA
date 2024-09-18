// There is a singly-linked list head and we want to delete a node node in it. You are given the node to be deleted node. You will not be given access to the first node of head. All the values of the linked list are unique, and it is guaranteed that the given node node is not the last node in the linked list. Delete the given node. Note that by deleting the node, we do not mean removing it from memory. We mean: 

// 1.  The value of the given node should not exist in the linked list.

// 2.  The number of nodes in the linked list should decrease by one.

// 3.  All the values before node should be in the same order.

// 4.  All the values after node should be in the same order.





#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

void display(ListNode* head){
    ListNode* current = head;
    while (current != NULL) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}
int main() {
    // Create nodes
    ListNode* head = new ListNode(4);
    ListNode* second = new ListNode(5);
    ListNode* third = new ListNode(1);
    ListNode* fourth = new ListNode(9);

    // Link nodes to form the list: 4 -> 5 -> 1 -> 9
    head->next = second;
    second->next = third;
    third->next = fourth;

    // Print original list
    cout << "Original list: ";
    display(head);

    // Assume we are given the node with value 5
    ListNode* node = second;

    // Delete the node
    Solution().deleteNode(node);

    // Print list after deletion
    cout << "List after : ";
    display(head);
}