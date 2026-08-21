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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* tail = head;
        int size = 1;

        while(tail->next != NULL){
        tail = tail->next;
            size++;
        }

     tail->next = head;

    int steps = size - k % size ;
    while(steps--){
        tail = tail->next;
    }
     ListNode* new_head = tail->next;
     tail->next = NULL;

     return new_head;

    }
};