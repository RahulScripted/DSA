// Given head, the head of a linked list, determine if the linked list has a cycle in it. There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter. Return true if there is a cycle in the linked list. Otherwise, return false.




#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast) return true;
        }
        return false;
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
    seventh -> next = third;

    Solution solve;
    if(solve.hasCycle(head)) cout<<"Yes, cycle present"<<endl;
    else cout<<"No, cycle is not present"<<endl;
}