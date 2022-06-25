/*
// Definition for TreeNode
class TreeNode {
public:
    long val;
    TreeNode* left;
    TreeNode* right;
    TreeNode* next;
    TreeNode (long x) {
        val = x;
        left = NULL;
        right = NULL;
        next = NULL;
    }
*/
class ValidateBinarySearchTree {
public:
    bool helper(TreeNode* root,int min,int max){
        if(!root)
            return true;
        bool cond1 = root->val > min && root->val < max;
        bool cond2 = helper(root->left,min,root->val);
        bool cond3 = helper(root->right,root->val,max);
        
        return cond1 && cond2 && cond3;
    }

    bool validateBinarySearchTree(TreeNode* root) {
        if(!root)
            return true;
        return helper(root,INT_MIN,INT_MAX);
    }
};
