// You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list. The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.




#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL or head -> next == NULL) return NULL;

        ListNode *slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while(fast != NULL and fast -> next != NULL){
            prev = slow;
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        prev -> next = slow -> next;
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
    ListNode* fifth = new ListNode(3);
    ListNode* sixth = new ListNode(7);
    ListNode* seventh = new ListNode(11);
    ListNode* eight = new ListNode(2);

    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;
    sixth -> next = seventh;
    seventh -> next = eight;

    cout<<"Before deletion : ";
    display(head);
    Solution solve;

    cout<<"After deletion : ";
    solve.deleteMiddle(head);
    display(head);
}