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

TreeNode* lowestCommonAncestorInBST(TreeNode *root, TreeNode *p, TreeNode *q) {
     if(!root || !p || !q)
        return NULL;

    if(root->val > p->val && root->val > q->val)
        return lowestCommonAncestorInBST(root->left,p,q);

    if(root->val < p->val && root->val < q->val)
        return lowestCommonAncestorInBST(root->right,p,q);

    return root;
}
