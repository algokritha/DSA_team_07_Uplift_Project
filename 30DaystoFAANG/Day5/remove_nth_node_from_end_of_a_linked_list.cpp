/* Problem Link => https://leetcode.com/problems/remove-nth-node-from-end-of-list/ */

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *itr = new ListNode();
        itr = head;
        int len = 0;
        while(itr != NULL){
            itr = itr->next;
            len++;
        }
        if(len == 1 && n==1){
            return NULL;
        }
        int toDelete = len - n;
        cout<<toDelete;
        if(head == NULL){
            return head;
        }
        cout<<toDelete;
        if(toDelete == 0){
            return head->next;
        }
        itr = head;
        for(int i=0; i<toDelete-1; i++){
            itr = itr->next;
        }
        
        itr->next = itr->next->next;
        
        return head;
    }
};
