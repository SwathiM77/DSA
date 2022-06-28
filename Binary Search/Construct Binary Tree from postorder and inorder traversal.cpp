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

TreeNode* helperFunc(vector<int>&postorder,vector<int>&inorder,int &s,int start,int end){
    
    if( start > end )
        return NULL;
    
   TreeNode* root = new TreeNode(postorder[s]);
   s--;
    
    if(start == end)
        return root;

    int ind;
    for(ind=start;ind<=end;ind++){
        if(root->val == inorder[ind])
        break;
    }

    root->right = helperFunc(postorder,inorder,s,ind+1,end);
    root->left = helperFunc(postorder,inorder,s,start,ind-1);
    
    return root;
}

TreeNode* constructBinaryTreeFromPostorderAndInorderTraversal(vector<int> &postorder, vector<int> &inorder) {

    int start = 0;
    int end = postorder.size()-1;
    int s = postorder.size()-1;

    TreeNode* root;
    root = helperFunc(postorder,inorder,s,start,end);
    
    return root; 
}
