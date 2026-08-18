class Solution {

    void reverse(ListNode* head, int time) {
        ListNode* curr = head;
        ListNode* prev = NULL;

        while (time--) {
            ListNode* nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
    }

public:
    ListNode* swapPairs(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* left = head;
        ListNode* right;
        ListNode* res = NULL;
        ListNode* prevleft = NULL;

        int size = 2;

        while (left != NULL) {

            right = left;

            // Check whether we have 2 nodes
            for (int i = 0; i < size - 1; i++) {
                if (right == NULL || right->next == NULL) {
                    return res;
                }

                right = right->next;
            }

            // Save the node after the pair
            ListNode* nextLeft = right->next;

            // Reverse the pair
            reverse(left, size);

            // First pair
            if (res == NULL) {
                res = right;
            }
            else {
                prevleft->next = right;
            }

            // left is now the last node of the reversed pair
            prevleft = left;

            // Connect to next pair
            left->next = nextLeft;

            // Move to next pair
            left = nextLeft;
        }

        return res;
    }
};