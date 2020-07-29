
Node *helper(int in[], int post[], int instart, int inend, int postend){
    if(postend<0 || instart>inend){
        return NULL;
    }
    Node *root = new Node(post[postend]);
    
    int i;
    
    for(i = instart; i<inend; i++){
        if(in[i] == root->data){
            break;
        }
    }
    
    root->left = helper(in, post, instart, i-1, postend-1-inend+i);
    root->right = helper(in, post, i+1, inend, postend-1);
    return root;
}


Node *buildTree(int in[], int post[], int n) {
    // Your code here
    
        return helper(in, post, 0, n-1, n-1);
}
