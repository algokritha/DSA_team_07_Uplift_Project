/* Problem Link => https://leetcode.com/problems/reverse-linked-list/ */

/* Brute force and very bad time complexity */
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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp = new ListNode();
        temp = head;
        int n = 1;
        if(head==NULL){
            return head;
        }
        while(temp->next != NULL){
            temp = temp->next;
            n++;
        }
        //cout<<n;
        int arr[n];
        temp = head;
        int i = 0;
        while(temp){
            arr[i] = temp->val;
            temp = temp->next;
            i++;
        }
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        
        ListNode *permHead = new ListNode();
        ListNode *newHead = new ListNode();
        newHead->val = arr[n-1];
        permHead = newHead;
        
        for(int j=n-2 ; j>=0 ; j--){
            ListNode *newtemp = new ListNode();
            newtemp->val = arr[j];
            newHead->next = newtemp;
            newHead = newHead->next;
        }
        newHead->next = NULL;
        
        return permHead;
    }
};

/* A better approach */
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
    ListNode* reverseList(ListNode* head) {
        ListNode *revHead = new ListNode();
        ListNode *permHead = new ListNode();

        if(head == NULL){
            return head;
        }
        revHead = NULL;
        while(head!=NULL){
            ListNode *temp = new ListNode();
            temp->val = head->val;
            if(revHead == NULL){
                revHead = temp;
                temp->next = NULL;
            }else{
                temp->next = revHead;
                revHead = temp;
            }
            head = head->next;
            
        }
        
        return revHead;
    }
};
