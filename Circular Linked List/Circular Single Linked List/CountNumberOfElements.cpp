//  Count number of elements in circular single linked list




#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

int countElements(ListNode* head){
    int count = 1;
    ListNode* temp = head;
    while(temp->next != head){
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(2);
    ListNode* fifth = new ListNode(1);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = head;

    cout<<"No. of elements : "<<countElements(head);
}