class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode * ans = dummy;

        while(head) {
            int sum = 0;

            while(head && head -> val != 0) {
                sum += head -> val;
                head = head -> next;
            }
            if(sum > 0) {
                ListNode* s = new ListNode(sum);
                dummy -> next = s;
                dummy = dummy -> next;
            }
            while(head && head -> val == 0) {
                head = head -> next;
            }
        }
        return ans -> next;
    }
};