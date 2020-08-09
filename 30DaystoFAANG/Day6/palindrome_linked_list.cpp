/* Problem Link => https://leetcode.com/problems/palindrome-linked-list/ */
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
    bool isPalindrome(ListNode* head) {
        ListNode *sp = head;
        ListNode *fp = head;
        ListNode *mid = NULL;
        
        while(fp != NULL && fp->next != NULL){
            sp = sp->next;
            fp = fp->next->next;
        }
        
        if(fp != NULL){
            mid = sp->next;
        }else{
            mid = sp;
        }
        
        ListNode *prev = NULL;
        ListNode *next = NULL;
        
        while(mid != NULL){
            next = mid->next;
            mid->next = prev;
            prev = mid;
            mid = next;
        }
        
        while(prev != NULL){
            if(prev->val != head->val){
                return false;
            }else{
                prev = prev->next;
                head = head->next;
            }
        }
        return true;
        
    }
};
