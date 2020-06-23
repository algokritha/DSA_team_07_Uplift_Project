//Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* prev = node;
        while(node->next!=NULL)
        
        {
            node->val = node->next->val;
            prev=node;
            node=node->next;
        }

        prev->next=NULL;
    }
};