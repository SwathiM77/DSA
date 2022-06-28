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
void addLeaf(TreeNode* root,vector<int>&ans){
    if(!root)
        return;
    addLeaf(root->left,ans);
    if(!root->left && !root->right)
        ans.push_back(root->val);
    addLeaf(root->right,ans);
}

void addLeftside(TreeNode* root,vector<int>&ans){
    if(!root)
        return;
    if(root->left){
        ans.push_back(root->val);
        addLeftside(root->left,ans);
    }
    else if(root->right){
        ans.push_back(root->val);
        addLeftside(root->right,ans);
    }
}

void addRightside(TreeNode* root,vector<int>&ans){
    if(!root)
        return;
    if(root->right){
       addRightside(root->right,ans);
        ans.push_back(root->val);
    }
    else if(root->left){
        addRightside(root->left,ans);
        ans.push_back(root->val);
    }
}

vector<int> binaryTreeBoundaryTraversal(TreeNode* root) {
    vector<int> ans;
    ans.push_back(root->val);
    addLeftside(root->left,ans);
    addLeaf(root->left,ans);
    addLeaf(root->right,ans);
    addRightside(root->right,ans);
    return ans;
}
