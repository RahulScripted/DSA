// Given the head of a linked list, rotate the list to the right by k places.




#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        ListNode* tail = head;
        ListNode* temp = head;
        int length = 1;
        while (tail->next) {
            tail = tail->next;
            length++;
        }

        k %= length;
        if (k == 0) return head;

        temp = head;
        for (int i = 1; i < length - k; i++) {
            temp = temp->next;
        }

        tail->next = head;
        head = temp->next;
        temp->next = NULL;

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
    ListNode* head = new ListNode(4);
    ListNode* second = new ListNode(5);
    ListNode* third = new ListNode(1);
    ListNode* fourth = new ListNode(9);
    ListNode* fifth = new ListNode(3);
    ListNode* sixth = new ListNode(7);
    ListNode* seventh = new ListNode(11);
    ListNode* eight = new ListNode(2);

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

    head = solve.rotateRight(head, 3);
    cout << "After rotation: ";
    display(head);

    return 0;
}
