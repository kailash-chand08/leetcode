/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
ListNode* ptr1  = head;
ListNode* ptr2 = head;
ListNode* mode = head;

if(head == NULL || head->next == NULL){
    return head;
}

int count = 1;
while(mode->next != NULL){
    mode = mode->next;
    count++;
}

for(int i=0; i< k-1; i++){
    ptr1 = ptr1->next;
}

for(int i=1; i< count - (k-1); i++){
    ptr2 = ptr2->next;
}

swap(ptr1->val, ptr2->val);

return head;
    }
};