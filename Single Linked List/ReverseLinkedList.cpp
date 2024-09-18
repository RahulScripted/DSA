// Given the head of a singly linked list, reverse the list, and return the reversed list.




#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Iterative way

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* Next = head;

        while(curr){
            Next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
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
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(4);
    ListNode* third = new ListNode(5);
    ListNode* fourth = new ListNode(9);
    ListNode* fifth = new ListNode(11);
    ListNode* sixth = new ListNode(7);
    ListNode* seventh = new ListNode(6);

    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;
    sixth -> next = seventh;

    Solution solve;
    cout<<"Before reversing : ";
    display(head);

    head = solve.reverseList(head);
    cout<<"After reversing : ";
    display(head);
}