// Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null. There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.





#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool flag = false; // checker
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast){
                flag = true;
                break;
            }
        }
        if(flag == false) return NULL;
        else{
            ListNode* temp = head;
            while(temp != slow){
                temp = temp -> next;
                slow = slow -> next;
            }
            return slow;
        }
    }
};

int main() {
    // Create nodes
    ListNode* head = new ListNode(4);
    ListNode* second = new ListNode(5);
    ListNode* third = new ListNode(1);
    ListNode* fourth = new ListNode(9);
    ListNode* fifth = new ListNode(11);
    ListNode* sixth = new ListNode(7);
    ListNode* seventh = new ListNode(3);

    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;
    sixth -> next = seventh;
    seventh -> next = fourth;

    Solution solve;
    ListNode* result = solve.detectCycle(head);
    cout<<"The cycle begins at : "<<result -> val<<endl;
}