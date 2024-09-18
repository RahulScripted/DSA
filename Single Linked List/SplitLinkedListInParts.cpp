// Given the head of a singly linked list and an integer k, split the linked list into k consecutive linked list parts. The length of each part should be as equal as possible: no two parts should have a size differing by more than one. This may lead to some parts being null. The parts should be in the order of occurrence in the input list, and parts occurring earlier should always have a size greater than or equal to parts occurring later. Return an array of the k parts.




#include <iostream>
#include <vector>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        // Find length
        int n = 0;
        ListNode* temp = head;
        while(temp) {
            temp = temp->next;
            n++;
        }

        // Breaking
        int size = n / k;
        int rem = n % k;
        vector<ListNode*> ans;
        temp = head;
        while(temp) {
            ListNode* c = new ListNode(100);
            ListNode* tempC = c;
            int s = size;
            if(rem > 0) {
                s++;
                rem--;
            }
            for(int i = 1; i <= s; i++) {
                tempC->next = temp;
                temp = temp->next;
                tempC = tempC->next;
            }
            
            tempC->next = NULL;
            ans.push_back(c->next);
        }

        if(ans.size() < k) {
            int extra = (k - ans.size());
            for(int i = 1; i <= extra; i++) ans.push_back(NULL);
        }
        return ans;
    }
};

void printLists(const vector<ListNode*>& lists) {
    for(const auto& list : lists) {
        ListNode* node = list;
        while(node) {
            cout << node->val << " -> ";
            node = node->next;
        }
        cout << "NULL" << endl;
    }
}

ListNode* createList(const vector<int>& values) {
    if(values.empty()) return nullptr;
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    for(size_t i = 1; i < values.size(); ++i) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

int main() {
    Solution solution;
    ListNode* head = createList({1, 2, 3, 4, 5});
    int k = 3;

    vector<ListNode*> result = solution.splitListToParts(head, k);

    printLists(result);
}