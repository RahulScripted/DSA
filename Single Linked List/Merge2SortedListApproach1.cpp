// You are given the heads of two sorted linked lists list1 and list2. Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.




#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // 1st Approach

        ListNode* tempA = list1;
        ListNode* tempB = list2;
        ListNode* newNode = new ListNode(100);
        ListNode* tempC = newNode;

        while(tempA != NULL && tempB != NULL){
            if(tempA -> val <= tempB -> val){
                ListNode* t = new ListNode(tempA -> val);
                tempC -> next = t;
                tempC = t;
                tempA = tempA -> next;
            }
            else{
                ListNode* t = new ListNode(tempB -> val);
                tempC -> next = t;
                tempC = t;
                tempB = tempB -> next;
            }
        }

        if(tempA == NULL) tempC -> next = tempB;
        else tempC -> next = tempA;
        return newNode -> next;
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

int main(){
    ListNode* list1 = new ListNode(1);
    ListNode* A1 = new ListNode(2);
    ListNode* A2 = new ListNode(3);
    ListNode* A3 = new ListNode(5);
    ListNode* A4 = new ListNode(7);
    list1 -> next = A1;
    A1 -> next = A2;
    A2 -> next = A3;
    A3 -> next = A4;


    ListNode* list2 = new ListNode(2);
    ListNode* B1 = new ListNode(4);
    ListNode* B2 = new ListNode(9);
    ListNode* B3 = new ListNode(11);
    list2 -> next = B1;
    B1 -> next = B2;
    B2 -> next = B3;


    Solution solve;
    cout<<"1st sorted list : ";
    display(list1);

    cout<<"2nd sorted list : ";
    display(list2);
    
    cout<<"After merging : ";
    ListNode* result = solve.mergeTwoLists(list1,list2);
    display(result);
}