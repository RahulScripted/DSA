// Given the head of a singly linked list, return the middle node of the linked list. If there are two middle nodes, return the second middle node.



#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
};

int main() {
    // Even Index
    ListNode* head = new ListNode(4);
    ListNode* second = new ListNode(5);
    ListNode* third = new ListNode(1);
    ListNode* fourth = new ListNode(9);

    head->next = second;
    second->next = third;
    third->next = fourth;

    Solution solve;
    ListNode* ans = solve.middleNode(head);
    cout<<ans->val<<endl;

    // Odd Index
    ListNode* fifth = new ListNode(3);
    ListNode* sixth = new ListNode(11);
    ListNode* seventh = new ListNode(7);
    ListNode* eight = new ListNode(4);
    ListNode* nine = new ListNode(5);
    
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eight;
    eight->next = nine;

    ans = solve.middleNode(head);
    cout<<ans->val<<endl;
}