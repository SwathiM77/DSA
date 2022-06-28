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

void helperInorder(TreeNode* root,int &count,int &ans,int k){
    if(!root)
        return;
    helperInorder(root->right,count,ans,k);
    count++;
    if( k == count)
        ans = root->val;
    helperInorder(root->left,count,ans,k); 
    
}

int kthLargestElementInABst(TreeNode *root, int k) {
    int ans = 0;
    int count = 0;
    helperInorder(root,count,ans,k);
    return ans;
}
