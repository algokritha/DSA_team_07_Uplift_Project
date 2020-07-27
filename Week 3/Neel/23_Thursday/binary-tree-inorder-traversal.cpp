class Solution {
public:
    vector<int> value;
    vector<int> inorderTraversal(TreeNode* root) {
        traversal(root);
        return value;
    }
    
    void traversal(TreeNode* root){
        if(root == NULL){
                return;
            }

        inorderTraversal(root->left);
        value.push_back(root->val);
        inorderTraversal(root->right);
    }
};
