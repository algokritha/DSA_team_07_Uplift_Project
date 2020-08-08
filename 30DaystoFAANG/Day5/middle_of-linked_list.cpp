/* Problem Link => https://leetcode.com/problems/middle-of-the-linked-list/ */

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
    ListNode* middleNode(ListNode* head) {
        ListNode *newHead = new ListNode();
        newHead = head;
        if(head == NULL){
            return NULL;
        }
        int n = 0;
        while(head != NULL){
            head = head->next;
            n++;
        }
        int mid;
        if(n%2 == 0){
            mid = (n/2) + 1;
        }else{
            mid = (n+1)/2;
        }
        
        for(int i=0; i<mid - 1; i++){
            newHead = newHead->next;
        }
        return newHead;

    }
};
