
Node *FindMin(Node* root){
    if(root == NULL){
        return root;
    }
    
    FindMin(root->left);
}

Node *deleteNode(Node *root,  int X)
{
    // your code goes here
    if(root == NULL){
        return root;
    }
    
    if(root->data > X){
        root->left = deleteNode(root->left, X);
    }
    else if(root->data < X){
        root->right = deleteNode(root->right, X);
    }
    else{
        //Case 1: No child
        if(root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;
        }
        //Case 2: One child
        else if(root->left == NULL){
            struct Node *temp;
            temp = root;
            root = root->right;
            delete temp;
            temp = NULL;
        }
        else if(root->right == NULL){
            struct Node *temp;
            temp = root;
            root = root->left;
            delete temp;
            temp = NULL;
        }
        //Case 3: Two children
        else{
            struct Node *temp;
            temp = FindMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

