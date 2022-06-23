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


vector<int> rightViewBinaryTree(TreeNode* root) {
    vector<int>res;
    queue<TreeNode*>q;
    if(!root)
        return res;
    q.push(root);
   while(!q.empty()){
        int n = q.size();
        for(int i=0;i<n-1;i++){
            TreeNode* node = q.front();
            q.pop();
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        TreeNode* node = q.front();
        res.push_back(node->val);
        q.pop();
        if(node->left)
            q.push(node->left);
        if(node->right)
            q.push(node->right);
    }
    return res;
}
