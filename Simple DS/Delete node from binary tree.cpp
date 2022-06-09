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

TreeNode *binaryTreeDeletion(TreeNode *root)
{
    if(root == NULL) return NULL;
    if(root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }   
    root->left = binaryTreeDeletion(root->left);
    root->right = binaryTreeDeletion(root->right);
    return root;
}
