#include "../crio/cpp/ds/TreeNode/TreeNode.hpp"

/*
Definition for TreeNode
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
}

Use new TreeNode(data) to create new Node
*/

int height(TreeNode* root){
    if(!root)
        return 0;
    if(!root->left && !root->right)
        return 0;
        
    int left = height(root->left);
    int right = height(root->right);
    return 1+max(left,right);
}

int diameterOfBinaryTree(TreeNode* root) {
    if(!root){
        return 0;
    }
    int left = diameterOfBinaryTree(root->left);
    int right = diameterOfBinaryTree(root->right);
    int extra = (root->left && root->right)?2:(root->left || root->right)?1:0;
    int ans = height(root->left) + height(root->right) + extra;

    return max(ans,max(left,right));
}
