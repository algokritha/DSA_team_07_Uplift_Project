/* Problem Link => https://leetcode.com/problems/add-two-numbers/ */

/* Not efficient */
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int factor = 0;
        __int128 num1 = 0;
        __int128 num2 = 0;
        while(l1 != NULL){
            num1 += (l1->val)*(pow(10, factor));
            l1 = l1->next;
            factor++;
        }
        factor = 0;
        while(l2 != NULL){
            num2 += (l2->val)*(pow(10, factor));
            l2 = l2->next;
            factor++;
        }
        
        __int128 sum = num1 + num2;
        
        ListNode *head = new ListNode();
        ListNode *itr = new ListNode();
        head = NULL;
        itr = head;
    
        if(sum == 0){
            ListNode *newval = new ListNode();
            newval->val = 0;
            newval->next = NULL;
            return newval;
        }
        while(sum){
            ListNode *temp = new ListNode();
            if(head == NULL){
                temp->val = sum%10;
                temp->next = NULL;
                head = temp;
                itr = temp;
            }
            else{
                temp->val = sum%10;
                itr->next = temp;
                temp->next = NULL;
                itr = temp;
            }
            sum /= 10;
        }
        return head;
    }
};
