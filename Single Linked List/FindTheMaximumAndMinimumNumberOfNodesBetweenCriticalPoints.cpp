// A critical point in a linked list is defined as either a local maxima or a local minima. A node is a local maxima if the current node has a value strictly greater than the previous node and the next node. A node is a local minima if the current node has a value strictly smaller than the previous node and the next node. Note that a node can only be a local maxima/minima if there exists both a previous node and a next node. Given a linked list head, return an array of length 2 containing [minDistance, maxDistance] where minDistance is the minimum distance between any two distinct critical points and maxDistance is the maximum distance between any two distinct critical points. If there are fewer than two critical points, return [-1, -1].




#include <iostream>
#include <vector>
#include <climits>

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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(!head || !head->next || !head->next->next) return {-1,-1};

        ListNode* prev = head;
        ListNode* curr = prev->next;
        ListNode* nxt = curr->next;

        vector<int> criticalPoints;
        int position = 1;
        while(nxt) {
            if((curr->val > prev->val && curr->val > nxt->val) || (curr->val < prev->val && curr->val < nxt->val)) {
                criticalPoints.push_back(position);
            }
            position++;
            prev = curr;
            curr = nxt;
            nxt = nxt->next;
        }
        if(criticalPoints.size() < 2) return {-1,-1};
        
        int minDistance = INT_MAX;
        for(int i = 1; i < criticalPoints.size(); i++) {
            minDistance = min(minDistance, criticalPoints[i] - criticalPoints[i - 1]);
        }

        return {minDistance, criticalPoints.back() - criticalPoints.front()};
    }
};

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

void printResult(const vector<int>& result) {
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
}

int main() {
    Solution solution;
    ListNode* head = createList({1, 3, 2, 5, 1, 3});
    
    vector<int> result = solution.nodesBetweenCriticalPoints(head);

    printResult(result);
}