#include "../crio/cpp/ds/TreeNode/TreeNode.hpp"


/*
// Definition of TreeNode
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
//start is starting index of preorder and end is ending index of preorder

TreeNode* helperFunc(vector<int>&preorder,vector<int>&inorder,int &s,int start,int end){
    int n = preorder.size();

    if( start > end || s >= n)
        return NULL;
    
    s++;
    TreeNode* root = new TreeNode(preorder[s]);
    
    int ind = -1;
    for(ind=start;ind<=end;ind++){
        if(preorder[s] == inorder[ind])
        break;
    }

    root->left = helperFunc(preorder,inorder,s,start,ind-1);
    root->right = helperFunc(preorder,inorder,s,ind+1,end);
    return root;
}

TreeNode* constructBinaryTreeFromPreorderAndInorderTraversal(vector<int> &preorder, vector<int> &inorder) {
    int start = 0, end = preorder.size()-1;
    int s = -1;

    TreeNode* root;
    root = helperFunc(preorder,inorder,s,start,end);
    
    return root;    
}
