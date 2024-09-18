// Given the head of a linked list and an integer val , remove all the nodes of the linked list that has Node.val == val , and return the new head




#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head,int n) {
        ListNode* temp = head;
        while (head != NULL && head -> val == n) {
            head = head->next;
        }

        while (temp != NULL && temp -> next != NULL){
            if (temp -> next -> val == n) temp -> next = temp -> next -> next;
            else temp = temp -> next;
        }
        return head;
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
    ListNode* fifth = new ListNode(11);
    ListNode* sixth = new ListNode(7);
    ListNode* seventh = new ListNode(5);

    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;
    sixth -> next = seventh;

    Solution solve;
    display(head);
    ListNode* result = solve.removeElements(head,5);
    display(result);
}