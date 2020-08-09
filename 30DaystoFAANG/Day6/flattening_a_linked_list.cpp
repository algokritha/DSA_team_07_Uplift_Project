/* Problem Link => https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1 */

/* Does not use O(1) space uses O(n) */
Node *flatten(Node *root)
{
   // Your code here
   vector<int> values;
   Node * cur = root;
   while(cur != NULL){
       Node *btmitr = cur;
       while(btmitr != NULL){
           values.push_back(btmitr->data);
           btmitr = btmitr->bottom;
       }
       cur = cur->next;
   }
   
   //cout<<values.size();
   sort(values.begin(), values.end());

   
   Node * head = new Node(0);
   root = head;
   int i=0;
   while(i != values.size()){
        Node *tmp = new Node(values[i]);
        tmp->bottom = NULL;
        //cout<<head->data<<" ";
        head->bottom = tmp;
        head = tmp;
        //cout<<tmp->data;
        
        i++;
   }
   
   return root->bottom;
}

