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
        ListNode *itr = head;
        int n = 0;
        while(itr != NULL){
            itr = itr->next;
            n++;
        }
        
        if(n == 0 || n == 1){
            return true;
        }

        if(n == 2){
            if(head->val == head->next->val){
                return true;
            }else{
                return false;
            }
        }
        
        stack<int> s;
        while(itr != NULL){ 
            s.push(itr->val); 
            // Move ahead  
            itr = itr->next; 
        } 
  
        // Iterate in the list again and  
        // check by popping from the stack 
        while(head != NULL){ 
              
            // Get the top most element  
             int i=s.top(); 
  
             // Pop the element  
             s.pop(); 
  
             // Check if data is not 
             // same as popped element  
            if(head->val != i){ 
                return false; 
            } 
  
            // Move ahead  
           head=head->next; 
        } 
  
        return true;
    }
};
