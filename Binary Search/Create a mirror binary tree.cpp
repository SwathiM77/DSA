#include "../crio/cpp/ds/TreeNode/TreeNode.hpp"
/*
Definition of TreeNode
class TreeNode {
public:
    long val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() {}

    TreeNode (long x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};
*/
TreeNode* mirrorBinaryTree(TreeNode* root) {
    if(!root)
        return root;
    TreeNode* left = NULL;
    TreeNode* right = NULL;
    
    if(root->left)
        left = mirrorBinaryTree(root->left); 
    if(root->right)
        right = mirrorBinaryTree(root->right);

    root->left = right;
    root->right = left;
    return root;
}
