Node * findMin(Node* root){
    if(root==NULL){
        return NULL;
    }
    
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}

Node* find(Node* root, Node* x){
    if(root == NULL){
        return NULL;
    }
    
    if(root->data > x->data){
        find(root->left, x);
    }else if(root->data < x->data){
        find(root->right, x);
    }else{
        return root;
    }
}

// returns the inorder successor of the Node x in BST (rooted at 'root')
Node * inOrderSuccessor(Node *root, Node *x)
{
    //Your code here
    struct Node* current = find(root, x);
    if(current == NULL){
        return NULL;
    }
    
    //Case 1: Node has a right subtree
    if(current->right != NULL){
        return findMin(current->right);
    }
    //Case 2: Node has no right subtree
    else{
        Node *successor = NULL;
        Node *ancestor = root;
        while(ancestor != NULL){
            if(current->data < ancestor->data){
                successor = ancestor;
                ancestor = ancestor->left;
            }else{
                ancestor = ancestor->right;
            }
        }
        return successor;
    }
}
