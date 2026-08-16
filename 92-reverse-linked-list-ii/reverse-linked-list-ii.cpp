class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if (head == NULL || left == right) {
            return head;
        }

        ListNode* t = head;
        ListNode* before = NULL;
        int pos = 1;

        // Move t to the left position
        while (pos < left) {
            before = t;
            t = t->next;
            pos++;
        }

        // t is now at left
        ListNode* prev = NULL;
        ListNode* first = t;   // original left node
        ListNode* after = NULL;

        int times = right - left + 1;

        while (times--) {
            ListNode* nex = t->next;

            t->next = prev;
            prev = t;
            t = nex;
        }

        // Connect the reversed part with the rest
        first->next = t;

        if (before != NULL) {
            before->next = prev;
        } else {
            head = prev;
        }

        return head;
    }
};