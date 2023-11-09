class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode *slow = head, *fast = head, *temp = head;

        while(fast -> next != NULL && fast -> next -> next != NULL) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }  

        ListNode *next = NULL, *prev = NULL, *current = slow;
        while(current != NULL) {
            next = current -> next;
            current -> next = prev;
            prev = current;
            current = next;
        }

        ListNode *p = temp, *q = prev;
        while(prev != NULL && temp != NULL) {                 
            p = p -> next;                
            q = q -> next;
            temp -> next = prev;
            prev -> next = p;   
            temp = p;    
            prev = q;
        }
    }
};