/* Problem Link => https://leetcode.com/problems/reverse-nodes-in-k-group/ */



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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *root = new ListNode(0, head);
        ListNode *cur = head;  
        ListNode *prev = root;  

        while(cur != NULL){
            ListNode *tail = cur;
            int listindex = 0;
            
            while(cur != NULL && listindex < k){
                cur = cur->next;
                listindex++;
            }
            
            if(listindex != k){
                prev->next = tail;
            }else{
                prev->next = reverse(tail, k);
                prev = tail;
            }
        }
    
        return root->next;

    }
    
    ListNode* reverse(ListNode* head, int k){
        ListNode *prev = NULL;
        ListNode *current = head;
        ListNode *next = NULL;
        
        while(current != NULL && k-- > 0){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        return head;
    }
};
