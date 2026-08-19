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
    void reverse(ListNode* head, int times){
        ListNode* curr = head;
        ListNode* prev = NULL;

        while(times--){
            ListNode* nex = curr->next;

            curr->next = prev;
            
            prev = curr;
            curr = nex;
            
        }
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* left = head;
        ListNode* right;
        ListNode* result = NULL; // to store the list;
        ListNode*prev_left = NULL;
        
        while(left != NULL){
            
            right = left;

            for(int i = 0; i< k-1; i++){
                if(right == NULL || right->next == NULL){
                    return result;
                }
                right = right->next;
            }

            ListNode* next_left = right->next;

            reverse(left, k);

            if(result == NULL){
                result = right;
            }else{
                prev_left->next = right;
            }

            prev_left = left;
            left->next = next_left;
            left = next_left;
        }
return result;
    }
};