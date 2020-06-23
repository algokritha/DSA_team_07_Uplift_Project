/* Write a program to find the node at which the intersection of two singly linked lists begins.*/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *slow = headA, *fast = headB;
        
        while (slow && fast) {
            if (slow == fast)
                return slow;
            slow = slow->next;
            fast = fast->next;
            if (slow == NULL)
                slow = headB;
            else if (fast == NULL)
                fast = headA;
        }
        return NULL;
    }
};