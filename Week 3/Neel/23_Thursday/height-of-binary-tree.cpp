int height(Node* root)
{
   // Your code here
   if(root == NULL){
       return 0;
   }
   
   int heightLeft = height(root->left);
   int heightRight = height(root->right);
   
   return max(heightLeft, heightRight) + 1;
   
}
