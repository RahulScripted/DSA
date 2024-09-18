// You are given two integers m and n, which represent the dimensions of a matrix. You are also given the head of a linked list of integers. Generate an m x n matrix that contains the integers in the linked list presented in spiral order (clockwise), starting from the top-left of the matrix. If there are remaining empty spaces, fill them with -1. Return the generated matrix.




#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
       vector<vector<int>> v(m,vector<int> (n,-1));
        int top=0,bottom=m-1;
        int left=0,right=n-1;

        ListNode* temp = head;
        while(left<=right && top<=bottom){
            if(top<=bottom){
                for(int i=left;i<=right;i++){
                    if(temp == NULL) return v;
                    v[top][i] = temp -> val;
                    temp = temp -> next;
                }
            }
            top++;

            if(left<=right){
                for(int i=top;i<=bottom;i++){
                    if(temp == NULL) return v;
                    v[i][right] = temp -> val;
                    temp = temp -> next;
                }
            }
            right--;

            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    if(temp == NULL) return v;
                    v[bottom][i] = temp -> val;
                    temp = temp -> next;
                }
            }
            bottom--;

            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    if(temp == NULL) return v;
                    v[i][left] = temp -> val;
                    temp = temp -> next;
                }
            }
            left++;
        }
        return v; 
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
    // Create nodes
    ListNode* head = new ListNode(4);
    ListNode* second = new ListNode(5);
    ListNode* third = new ListNode(1);
    ListNode* fourth = new ListNode(9);
    ListNode* fifth = new ListNode(3);
    ListNode* sixth = new ListNode(7);
    ListNode* seventh = new ListNode(11);
    ListNode* eight = new ListNode(2);
    ListNode* nine = new ListNode(3);
    ListNode* ten = new ListNode(7);
    ListNode* eleven = new ListNode(4);
    ListNode* twelve = new ListNode(3);

    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;
    sixth -> next = seventh;
    seventh -> next = eight;
    eight -> next = nine;
    nine -> next = ten;
    ten -> next = eleven;
    eleven -> next = twelve;

    Solution solve;
    int m = 3,n = 5;
    vector<vector<int>> result = solve.spiralMatrix(m,n,head);

    for(int i = 0;i < result.size();i++){
        for(int j = 0;j < result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}