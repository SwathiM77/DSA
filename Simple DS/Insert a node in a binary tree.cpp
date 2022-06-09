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

TreeNode *binaryTreeInsertion(TreeNode *root)
{
    TreeNode* node = new TreeNode(0);
    if(root == NULL) return NULL;
    root->left = binaryTreeInsertion(root->left);
    root->right = binaryTreeInsertion(root->right);
    if(root-> left != NULL && root->right == NULL)
        root->right = node;
    if(root-> left == NULL && root->right != NULL)
        root->left = node;
    return root;
}
