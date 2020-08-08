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

/* Efficient but does not satisfy all estcases, needs work */

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
        ListNode *head = new ListNode(NULL);
        ListNode *itr = new ListNode();
        
        itr = head;
        int carry = 0;
        while(l1 != NULL || l2 != NULL){
            if(head == NULL){
                head->val = l1->val + l2->val;
                head->next = NULL;
                itr = head;
            }else{
                ListNode *temp = new ListNode();
                temp->val = l1->val + l2->val + carry;
                if(carry == 1){
                    carry = 0;
                }
                if(temp->val > 9){
                    carry = 1;
                    temp->val = temp->val%10;
                }
                temp->next = NULL;
                itr->next = temp;
                itr = itr->next;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        if(l1 == NULL && l2 != NULL){
            itr->next = l2;
        }
        if(l1 != NULL & l2 == NULL){
            itr->next = l1;
        }
        cout<<carry;
        if(carry == 1){
            ListNode *temp = new ListNode();
            temp->val = 1;
            temp->next = NULL;
            itr->next = temp;
            itr = itr->next;
        }
        
        return head->next;
    }
};
