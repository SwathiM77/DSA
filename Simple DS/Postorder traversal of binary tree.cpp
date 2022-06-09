#include <bits/stdc++.h>

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

Use new TreeNode(data) to create new Node
*/
class BinaryTreePostorderTraversal
{
public:
    void help(TreeNode* node,vector<int>& res){
        if(node == NULL) return;
        help(node->left,res);
        help(node->right,res);
        res.push_back(node->val);
    }
    // Implement your solution here
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> res;
        help(root,res);
        return res;
    }
};
