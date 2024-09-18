// Given the head of a singly linked list, return true if it is a palindrome or false otherwise.




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
        // Recursive way
        if(head == NULL || head -> next == NULL) return head; // Base Case
        
        ListNode* newHead = reverseList(head -> next);
        head -> next -> next = head;
        head -> next = NULL;
        return newHead;
    }

    bool isPalindrome(ListNode* head) {
        if(head == NULL || head ->next == NULL) return true;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast -> next != NULL && fast -> next -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        ListNode* newHead = reverseList(slow -> next);
        slow -> next = newHead;

        ListNode* tempA = head;
        ListNode* tempB = newHead;
        while(tempB){
            if(tempA -> val != tempB -> val) return false;
            tempA = tempA -> next;
            tempB = tempB -> next;
        }
        return true;
    }
};

int main() {
    // Create nodes
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(2);
    ListNode* fifth = new ListNode(1);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Solution solve;
    bool flag = solve.isPalindrome(head);
    if(flag) cout<<"Palindrome Linked list"<<endl;
    else cout<<"Palindrome Linked list"<<endl;
}