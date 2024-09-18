// Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.




#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head -> next == NULL) return head;
        ListNode* a = head;
        ListNode* b = head -> next;

        while(b != NULL){
            while(b != NULL && b -> val == a -> val) b = b -> next;
            a -> next = b;
            a = b;
            if(b != NULL) b = b -> next;
        }
        return head;
    }
};

void display(ListNode* head) {
    ListNode* current = head;
    while (current != NULL) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Create nodes
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(4);
    ListNode* third = new ListNode(4);
    ListNode* fourth = new ListNode(5);
    ListNode* fifth = new ListNode(5);
    ListNode* sixth = new ListNode(5);
    ListNode* seventh = new ListNode(9);
    ListNode* eight = new ListNode(11);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eight;

    cout << "Before rotation: ";
    display(head);
    Solution solve;

    head = solve.deleteDuplicates(head);
    cout << "After rotation: ";
    display(head);

    return 0;
}