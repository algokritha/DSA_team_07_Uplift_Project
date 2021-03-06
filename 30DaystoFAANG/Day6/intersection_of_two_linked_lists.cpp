/* Problem Link => https://leetcode.com/problems/intersection-of-two-linked-lists/ */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* currentA = headA;
        ListNode* currentB = headB;
        int lenA = 0;
        int lenB = 0;
        if(headA == NULL || headB == NULL) return NULL;
        while(currentA){
            currentA = currentA->next;
            lenA++;
        }
        while(currentB){
            currentB = currentB->next;
            lenB++;
        }

        for(int diff = abs(lenA - lenB); diff>0; diff--){
            if(lenA>lenB){
                headA = headA->next;
            }
            else headB = headB->next;
        }

        while(headA && headB){
            if(headA == headB){
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    
       
    }
};
