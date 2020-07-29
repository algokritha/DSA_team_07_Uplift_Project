
Node* helper(int in[], int pre[], int instart, int inend, int prestart, int length){
    if(instart>inend || prestart >= length){
        return NULL;
    }
    
    Node* root = new Node(pre[prestart]);
    int i;
    for(i=0; i<inend; i++){
        if(in[i] == root->data){
            break;
        }
    }
    
    root->left = helper(in, pre, instart, i-1, prestart+1, length);
    root->right = helper(in, pre, i+1, inend, prestart+i+1-instart, length);    
    return root;
}

Node* buildTree(int in[],int pre[], int n)
{
//add code here.
    return helper(in, pre, 0, n-1, 0, n);
}
