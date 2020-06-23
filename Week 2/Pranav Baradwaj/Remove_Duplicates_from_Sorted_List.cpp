//Given a sorted linked list, delete all duplicates such that each element appear only once.
 ListNode* deleteDuplicates(node *head)
{
  node *p = head;
  node *q;
  while(p!=NULL && p->next!=NULL)
  {
      if(p->data == p->next->data)
      {
          q = p->next->next;
          
          if(q==NULL)
          {
              p->next = NULL;
              break;         
          } 
          
          p->next = q;
      }
  
      if(p->data != p->next->data)
        p = p->next;
      
  }

    return head;
    
    
}