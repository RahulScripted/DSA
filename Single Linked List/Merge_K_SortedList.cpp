// You are given an array of k linked-lists lists, each linked-list is sorted in ascending order. Merge all the linked-lists into one sorted linked-list and return it.




#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* merge(ListNode* list1, ListNode* list2) {
            ListNode* newNode = new ListNode(100);
            ListNode* tempC = newNode;
            while(list1 != NULL && list2 != NULL){
                if(list1 -> val <= list2 -> val){
                    tempC -> next = list1;
                    tempC = list1;
                    list1 = list1 -> next;
                }
                else{
                    tempC -> next = list2;
                    tempC = list2;
                    list2 = list2 -> next;
                }
            }
            
            if(list1 == NULL) tempC -> next = list2;
            else tempC -> next = list1;

            return newNode -> next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return NULL;

        while(lists.size() > 1){
            ListNode* a = lists[lists.size() - 1];
            lists.pop_back();

            ListNode* b = lists[lists.size() - 1];
            lists.pop_back();
            
            ListNode* c = merge(a,b);
            lists.push_back(c);
        }
        return lists[0];
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
    // Creating some sorted linked lists
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(4);
    list1->next->next = new ListNode(5);
    list1->next->next->next = new ListNode(7);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    ListNode* list3 = new ListNode(2);
    list3->next = new ListNode(4);
    list3->next->next = new ListNode(7);
    list3->next->next->next = new ListNode(11);

    ListNode* list4 = new ListNode(0);
    list4->next = new ListNode(3);

    vector<ListNode*> lists = {list1, list2, list3, list4};

    Solution solve;
    ListNode* mergedList = solve.mergeKLists(lists);

    cout << "Merged Linked List: ";
    display(mergedList);
}